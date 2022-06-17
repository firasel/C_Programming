#include<stdio.h>
#include<string.h>
void count_zero(char str[]){
    int count=0;
    for(int i=0; i<strlen(str); i++)
        (str[i] == '0') && (count++);
    printf("%d\n",count);
}
int main(){
    count_zero("01101000");
    return 0;
}
