#include<stdio.h>
int main() {
    int n,m,count=0;
    scanf("%d %d",&n,&m);

    for(int a=0; a <= (n>m ? m : n); a++){
        int b = n - (a*a);
        (a+(b*b) == m) && (b >= 0) && (count++);
    }
    printf("%d\n",count);

    return 0;
}
