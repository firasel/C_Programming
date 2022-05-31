#include<stdio.h>

//unsigned int binaryToInt(char str[]) {
//    int len = strlen(str);
//
//    unsigned int ans = 0;
//    for(int i=0; i<len; i++) {
//        int bit = str[i] - '0';
//        ans = ans*2+bit;
//    }
//
//    return ans;
//}

void toBinary(unsigned int val, char str[]) {
    int idx = 0;
    while(val > 0) {
        int d = val%2;
        val = val/2;
        str[idx] = '0' + d;
        idx++;
    }
    str[idx] = '\0';
}

int main(){
    char str[100];
    unsigned int v = 10;
    toBinary(v,str);
    printf("%s\n",str);

    return 0;
}
