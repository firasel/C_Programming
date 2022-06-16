#include<stdio.h>
#include<string.h>

int find_lastIndex(char str[],char aChar){
    for(int i=(strlen(str)-1); i>=0; i--){
        if(str[i] == aChar)
            return i;
    }
    return -1;
}

int main(){
    int index = find_lastIndex("Hello world",'l');
    index>=0 ? printf("Last Index number is = %d\n",index) : printf("Character not found!\n");

    return 0;
}
