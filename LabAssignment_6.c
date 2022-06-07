#include <stdio.h>

struct Fraction {
    int num;
    int denom;
};

void print(struct Fraction f){
    printf("%d/%d", f.num,f.denom);
}

struct Fraction inverse(struct Fraction a){
    struct Fraction ans;
    ans.num = a.denom;
    ans.denom = a.num;
    return ans;
};

int main () {
    struct Fraction a;
    scanf("%d %d", &a.num,&a.denom);
    print(a);
    printf(" = ");
    print(inverse(a));
}
