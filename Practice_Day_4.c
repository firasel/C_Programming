#include <stdio.h>

int main() {
    int n,count = 0;
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        ((a>0 && b>0) || (a>0 && c>0) || (b>0 && c>0)) && count++;
    }
    printf("%d\n",count);

    return 0;
}
