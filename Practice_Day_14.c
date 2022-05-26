#include<stdio.h>

int findNegatives(int n, int in[], int out[]){
    int count = 0;
    for(int i=0; i<n; i++){
        if(in[i] < 0){
            out[count] = in[i];
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    scanf("%d",&n);

    int a[n],out[n];
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);

    int totalFound = findNegatives(n,a,out);
    printf("Total negative number is: %d\n",totalFound);

    for(int i=0; i<totalFound; i++){
        printf("%d ",out[i]);
    }
    printf("\n");

    return 0;
}
