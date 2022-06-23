#include<stdio.h>
#include<string.h>
int main(){
    char str[52];
    scanf("%s",&str);
    int count=0;
    for(int i=0; i<strlen(str); i++)
        str[i]== 'a' && count++;
    ((strlen(str)-count)<count) ? printf("%d\n",strlen(str)) : printf("%d\n",count*2-1);
    return 0;
}
