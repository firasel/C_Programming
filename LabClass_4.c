#include<stdio.h>

int max(int a, int b){
    return a > b ? a : b;
}

int getMax(int n, int a[]){
    int ans = a[0];
    for(int i=1; i<n; i++){
        ans = max(ans, a[i]);
    }
    return ans;
}

int main(){
    int n;
    scanf("%d",&n);
    int a[n];

    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    int max = getMax(n, a);
    printf("%d\n",max);

    return 0;
}
