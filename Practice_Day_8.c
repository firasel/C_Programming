#include<stdio.h>
#include <math.h>

int main(){
    int n,k=2;
    scanf("%d",&n);

    if(n>0){
       for(int i=0; i<n; i++){
            if(pow(k,i)>n){
                printf("%d",i-1);
                break;
            }else if(pow(k,i)==n){
                printf("%d",i);
                break;
            }
        }
    }else{
        printf("59\n");
    }

    return 0;
}
