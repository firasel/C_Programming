#include<stdio.h>

int main() {
    int n=5;
    int a[n];

    for (int i=0; i<n; i++)
        a[i] = i+1;

    int prod=1;

    for (int i=0; i<n; i++) {
        int *b = &a[i];
        prod *= *b;
    }

    printf("%d", prod);

    return 0;
}
