#include<stdio.h>
int main(){
    int value = 100;
    int* pval;

    *pval = 50;
    printf("%p address has value %d\n",&pval,*pval);

    pval = &value;
    printf("%p address has value %d\n",pval,*pval);

    value = 200;
    printf("%p address has value %d\n",pval,*pval);

    return 0;
}
