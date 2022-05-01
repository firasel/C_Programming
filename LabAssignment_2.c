#include <stdio.h>

int main()
{
    int s,t,x,check=0,i;
    scanf("%d %d %d",&s,&t,&x);

    i=s;

    do{
        if(s == t) break;
        (i == x) && (check = 1);
        (i == 23) && (i = 0);
        i++;
    }while(i < t);

    check == 1 ? printf("Yes\n") : printf("No\n");

    return 0;
}
