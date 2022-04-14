//Problem A
#include <stdio.h>
int main(){

    printf("Hello world!\n");

    return  0;
}

//Problem B
#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d %d\n",b-1,a-1);
    return 0;
}

//Problem C
#include <stdio.h>
int main(){
    int n,a,b;
    scanf("%d %d %d",&n,&a,&b);
    printf("%d\n",2*(n*a*b));
    return 0;
}

//Problem D
#include <stdio.h>
int main(){
    int a,b,h;

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&h);

    printf("%d\n",((a+b)*h)/2);

    return 0;
}

//Problem E
#include <stdio.h>
int main(){
    int a,b;

    scanf("%d %d",&a,&b);

    printf("%f\n",(float)a/(float)b);

    return  0;
}

//Problem F
#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);

    printf("%d\n",(b*2)-a);

    return 0;
}

//Problem G
#include <stdio.h>
int main(){
    int H,W,h,w;
    scanf("%d %d",&H,&W);
    scanf("%d %d",&h,&w);

    printf("%d\n",(H-h)*(W-w));

    return 0;
}
