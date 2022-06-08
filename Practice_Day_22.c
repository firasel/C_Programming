#include<stdio.h>
#include<string.h>

int main(){
    int n, total=0;
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        char str[13];
        scanf("%s",&str);

        if(strcmp(str, "Tetrahedron") == 0)
            total += 4;
        else if(strcmp(str, "Cube") == 0)
            total += 6;
        else if(strcmp(str, "Octahedron") == 0)
            total += 8;
        else if(strcmp(str, "Dodecahedron") == 0)
            total += 12;
        else if(strcmp(str, "Icosahedron") == 0)
            total += 20;
    }

    printf("%d\n",total);
    return 0;
}
