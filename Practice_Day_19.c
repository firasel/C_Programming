#include<stdio.h>
#include<string.h>
#include<stdbool.h>

struct Binary{
    char str[50];
};

void strRev(char str[]){
    int len = strlen(str) - 1;
    for(int i = 0; i<=len/2; i++){
        char temp = str[len - i];
        str[len - i] = str[i];
        str[i] = temp;
    }
}

struct Binary toBinary(unsigned int val, int k) {
    struct Binary ans;
    int idx = 0;
    while(val > 0){
        int d = val%2;
        val = val/2;
        ans.str[idx] = '0' + d;
        idx++;
    }
    for(int i = idx; i<k; i++) ans.str[i] = '0';
    ans.str[k] = 0;
    strRev(ans.str);
    return ans;
}

bool getBit(unsigned int mask, int k){
    return (mask &(1<<k)) != 0;
}

unsigned int setBit(unsigned int mask, int k){
    return mask | (1<<k);
}

unsigned int clearBit(unsigned int mask, int k){
    return mask & ~(1<<k);
}

unsigned int flipBit(unsigned int mask, int k){
    return mask ^ (1<<k);
}

unsigned char rightRotate(unsigned char mask, int k){
    int lastk = mask & ((1<<k)-1);
    return (mask >> k) | (lastk << (8-k));
}

int main(){
//    int x = 54;
//    printf("%d = %s\n", x, toBinary(x,8).str);
//
//    for(int i=0; i<8; i++){
//        printf("%d th bit: %d\n", i, getBit(x, i));
//        printf("Clear: %s\n", toBinary(clearBit(x, i), 8).str);
//        printf("Set: %s\n", toBinary(setBit(x, i), 8).str);
//        printf("Flip: %s\n", toBinary(flipBit(x, i), 8).str);
//    }

    unsigned char x= 54;
    printf("%d = %s\n", x, toBinary(x,8).str);

    for(int i=0; i<8; i++){
        unsigned char R = rightRotate(x, i);
        printf("Rotate %d = %s\n", i, toBinary(R,8).str);

    }

    return 0;
}
