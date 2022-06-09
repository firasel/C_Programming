#include<stdio.h>

int main(){
    int n, a=0,b=0;
    scanf("%d",&n);
    int arr[n];

    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    for(int i=0; i<n; i++){
        int maxIndex = 0;
        for(int j=0; j<n; j++)
            arr[maxIndex] < arr[j] && (maxIndex = j);
        i%2 == 0 ? (a+=arr[maxIndex]) : (b+=arr[maxIndex]);
        arr[maxIndex] = 0;
    }

    printf("%d %d\n",a,b);
    return 0;
}
