#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i = 0; i<n; i++)
        scanf("%d",&arr[i]);

    int arr2[n];
    for(int i = 0; i<n; i++)
        arr2[i] = arr[n-1-i];

    for(int i = 0; i<n; i++)
        printf("%d ",arr2[i]);

    printf("Hello world!");


    return 0;
}
