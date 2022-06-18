#include<stdio.h>

struct Student{
    char name[100];
    int roll;`
    int marks;
};

int main(){
    struct Student a = {"Sohel",.marks=95,.roll=21};
    strcpy(a.name,"Rana");
    printf("Name-%s Roll-%d Marks-%d\n", a.name, a.roll, a.marks);

    return 0;
}
