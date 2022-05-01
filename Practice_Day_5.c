#include<stdio.h>

int main(){
    int n,maxLimit = 2147483647;
    scanf("%d",&n);
    printf("%d %d\n",maxLimit,n);
    -maxLimit <= n && n <= maxLimit ? printf("Yes\n") : printf("No\n");
    return 0;
}
