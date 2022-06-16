#include<stdio.h>

int get_sum(int arr[],int n){
    int sum = 0;
    while(n>0){
        sum+=arr[n-1];
        n--;
    }
    return sum;
}

int main(){
    int arr[] = {1,2,3,4,5};
    printf("Sum is = %d",get_sum(arr,5));

    return 0;
}
