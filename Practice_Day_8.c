#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t>0){
        int n;
        scanf("%d",&n);

        int numArr[n];

        for(int i=0; i<n; i++)
            scanf("%d",&numArr[i]);

        int unique = numArr[1];

        for(int i=0; i<(n-2); i++){
            if(unique != numArr[i] && unique != numArr[i+2] ){
                printf("%d\n",i+2);
                break;
            }else if(unique != numArr[i]){
                printf("%d\n",i+1);
                break;
            }else if(unique != numArr[i+2]){
                printf("%d\n",i+3);
                break;
            }else{
                unique = numArr[i+2];
            }
        }

        t--;
    }

    return 0;
}
