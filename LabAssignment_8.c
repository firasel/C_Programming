#include<stdio.h>
int main(){
    int t=0;
    scanf("%d",&t);
    while(t>0){
        int n,c;
        scanf("%d",&n);
        int num[n];
        for(int i=0; i<n; i++)
            scanf("%d",&num[i]);
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(num[i]>num[j]){
                    int temp = num[j];
                    num[j] = num[i];
                    num[i] = temp;
                }
            }
        }
        for(int i=0; i<n-1; i++){
            if(i == 0){
                c = num[i+1] - num[i];
            }else{
                (num[i+1] - num[i] < c) && (c = (num[i+1] - num[i]));
            }
        }
        printf("%d\n",c);
        t--;
    }
    return 0;
}
