#include<stdio.h>

int main(){
   int a=5;
   int *p = &a;
   int **q = &p;
   int ***r = &q;
   ***r = 10;
   printf("%d\n",a);

   return 0;
}
