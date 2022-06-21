#include<stdio.h>

int main(){
    FILE *inputFile;
    FILE *outputFile;

    inputFile = fopen("in_28.txt","r");
    outputFile = fopen("out_28.txt","a");

    int t;
    fscanf(inputFile, "%d", &t);

    for(int i=1; i<=t; i++){
        int n, sum = 0;
        fscanf(inputFile, "%d", &n);
        int numArr[n];
        for(int i=0; i<n; i++){
            fscanf(inputFile, "%d", &numArr[i]);
            sum+=numArr[i];
        }
        fprintf(outputFile, "Case %d = %d\n", i, sum);
    }

    return 0;
}
