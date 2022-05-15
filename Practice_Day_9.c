#include<stdio.h>

int getMin(int a, int b){
    return a < b ? a : b;
}

int getArrMin(int n, int a[]){
    int min = a[0];
    for(int i=0; i<n; i++)
        min = getMin(a[i],min);
    return min;
}

int main(){
    int sz = 7;
    int a[] = {4, 3, 5, 7, 5, 2, 7};
    printf("%d\n",getArrMin(sz,a));
    return 0;
}
