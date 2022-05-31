#include<stdio.h>
#include<string.h>

void toBinary(unsigned int val, char str[]){
    int idx = 0;
    while(val > 0){
        int d = val%2;
        val = val/2;
        str[idx] = '0' + d;
        idx++;
    }

    str[idx] = '\0';

    for(int i=0; i<idx/2; i++){
        char temp = str[i];
        str[i] = str[idx - i - 1];
        str[idx - i - 1] = temp;
    }
}

int main() {
    char str[100];
    unsigned int v = 10;
    toBinary(v, str);
    printf("%s\n",str);

    return 0;
}

