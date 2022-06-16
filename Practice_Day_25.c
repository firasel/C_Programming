#include<stdio.h>

void ultra_sum(int a,int b,int *sum, int *multiply){
    *sum = a+b;
    *multiply = a*b;
}

int main(){
    int a=5,b=10,sum,multiply;
    ultra_sum(a,b,&sum,&multiply);
    printf("Sum is = %d, Multiply is = %d\n", sum, multiply);

    return 0;
}
