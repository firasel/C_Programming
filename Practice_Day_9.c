#include<stdio.h>
int main(){
    int n,sum = 0;
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        int num[n];
        for(int k=0; k<n; k++){
            scanf("%d",&num[k]);
            if((n-1)/2 == i) sum+=num[k];
            else if((n-1)/2 == k) sum+=num[k];
            else if((i%2 == 0) && (k%2 == 0)) sum+=num[k];
            else if((i%2 != 0) && (k%2 != 0)) sum+=num[k];
        }
    }
    printf("%d\n",sum);
    return 0;
}
