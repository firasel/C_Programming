#include<stdio.h>
#include<stdlib.h>

int * makeReverse(int n, const int a[]){
    int *temp = (int*)malloc(n * sizeof(int));

    for(int i=0; i<n; i++)
        temp[i] = a[n-i-1];

    return temp;
}

int main() {
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);

    int *b = makeReverse(n,a);

    for(int i=0; i<n; i++)
        printf("%d ",b[i]);
    printf("\n");


    return 0;
}
