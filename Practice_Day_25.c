#include<stdio.h>

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a=5,b=10;
    printf("A = %d, B = %d\n",a,b);
    swap(&a,&b);
    printf("A = %d, B = %d\n",a,b);

    return 0;
}
