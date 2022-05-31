#include<stdio.h>
#include<string.h>

void strRev(char str[]){
    int len = strlen(str) - 1;
    for(int i=0; i<=len/2; i++){
        char temp = str[i];
        str[i] = str[len-i];
        str[len-i] = temp;
    }
}

void toBinary(unsigned int val, char str[], int k){
    int idx = 0;
    while(val > 0){
        int d = val%2;
        val = val/2;
        str[idx] = '0' + d;
        idx++;
    }

    for(int i = idx; i<k; i++) str[i] = '0';
    str[k] = 0;
    strRev(str);
}

int main() {
    unsigned int x = 10;
    unsigned int y = 35;
    char sx[100], sy[100], sand[100];
    toBinary(x, sx, 8);
    toBinary(y, sy, 8);

    printf("sx = %s\n",sx);
    printf("sy = %s\n",sy);

    unsigned int and = x >> 2;
    toBinary(and, sand, 8);
    printf("and = %d\n",and);
    printf("and = %s\n",sand);

    return 0;
}

