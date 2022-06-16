#include<stdio.h>
#include<string.h>

int find_firstIndex(char str[],char aChar){
    for(int i=0; i<strlen(str); i++){
        if(str[i] == aChar)
            return i;
    }
    return -1;
}

int main(){
    int index = find_firstIndex("Hello world",'w');
    index>=0 ? printf("Index number is = %d\n",index) : printf("Character not found!\n");

    return 0;
}
