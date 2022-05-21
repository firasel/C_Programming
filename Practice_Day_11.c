#include<stdio.h>

int main(){
    int values[10];
    double reals[20];

    printf("%d %d\n", sizeof(int), sizeof(double));
    printf("%d %d\n", sizeof(values), sizeof(reals));

    int sz = sizeof(reals)/sizeof(reals[0]);
    printf("%d\n",sz);

    for(int i=0; i<10; i++)
        values[i] = i+1;

    for(int i=0; i<10; i++)
        printf("%d ",values[i]);

    return 0;
}
