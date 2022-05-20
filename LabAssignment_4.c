#include <stdio.h>

int main () {
    int n,*ptr;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n;i++)
        scanf("%d", &arr[i]);

    ptr = &arr[n-1];

    for(int i=0; i<n; i++)
        printf("%d ", *ptr--);

    return 0;
}
