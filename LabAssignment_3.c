#include<stdio.h>

int main() {
    int n,d;
    scanf("%d %d",&n,&d);
    int a[n-1];
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);

    for(int i=0; i<d; i++){
        int temp = a[0];
        for(int j=0; j<(n-1);j++){
            a[j] = a[j+1];
        }
        a[n-1] = temp;
    }

    for(int i=0; i<n; i++)
        printf("%d ",a[i]);
    printf("\n");


    return 0;
}
