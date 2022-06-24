#include<stdio.h>
struct Person{
    char s[22];
    char t[22];
};

int main(){
    int n;
    scanf("%d",&n);
    struct Person names[n];
    for(int i=0; i<n; i++)
        scanf("%s %s",&names[i].s, &names[i].t);
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(strcmp(names[i].s, names[j].s) == 0 && strcmp(names[i].t, names[j].t) == 0){
                printf("Yes\n");
                return 0;
            }
        }
    }
    printf("No\n");
    return 0;
}
