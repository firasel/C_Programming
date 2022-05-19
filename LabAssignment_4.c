#include<stdio.h>

void makeNArray(int n, int *sum){
    for(int i=1; i<=n; i++)
        *sum += (i*i);
}

int main(){
    int n = 10,sum = 0;
    makeNArray(n,&sum);
    printf("%d\n",sum);

    return 0;
}
