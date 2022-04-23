#include<stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    while (a != 0) {
        int rem = b%a;
        b = a;
        a = rem;
        printf("%d %d\n", a, b);
    }
    printf("Gcd = %d\n",b);

    return 0;
}
