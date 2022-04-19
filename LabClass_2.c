#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    (a-b)>c?printf("0\n"):printf("%d\n",c-(a-b));

    return 0;
}
