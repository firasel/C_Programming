#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        int grade, lastNum;
        scanf("%d",&grade);
        grade < 38 ? printf("%d\n",grade) : grade % 5 == 3 ? printf("%d\n",grade+2) : grade % 5 == 4 ? printf("%d\n",grade+1) : printf("%d\n",grade);
    }
    return 0;
}
