#include<stdio.h>
void change_array(int arr[], int n, int arr2[]){
    for(int i=0; i<n; i++)
        arr2[i] = arr[n-i-1];
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int arr2[5];
    change_array(arr, 5, arr2);
    for(int i=0; i<5; i++)
        printf("%d ",arr2[i]);
    return 0;
}
