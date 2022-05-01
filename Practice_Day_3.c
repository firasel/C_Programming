#include <stdio.h>
1 1 1 4
2 4 2 2

int main() {
    int arr[4];
    for(int i=0; i<4; i++) {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<4; i++) {
        for(int j=0; j<3; j++) {

        }
    }

    if(a==b && a==c && a==d) {
        printf("3\n");
    } else if(a==b || c==d || a==c || a==d) {
        printf("2\n");
    } else if(a==b || a==c || a==d || b==c || b==d || c==d) {
        printf("1\n");
    }else{
        printf("0\n");
    }


    return 0;
}
