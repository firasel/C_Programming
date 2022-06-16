#include<stdio.h>
#include<string.h>

int main(){
    int n;
    scanf("%d",&n);
    int rMax=0,rMin=0;
    char foodA[31]="", foodB[31]="";

    for(int i=0; i<n; i++){
        char food[31];
        int r;
        scanf("%s", food);
        scanf(" %d", &r);
        if(i==0){
            rMax = r;
            rMin = r;
            strcpy(foodA, food);
            strcpy(foodB, food);
        }else{
            if(r > rMax){
                rMax = r;
                strcpy(foodA, food);
            }
            if(r < rMin){
                rMin = r;
                strcpy(foodB, food);
            }
        }
    }
    printf("%s %s\n", foodB, foodA);
    return 0;
}
