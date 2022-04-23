#include<stdio.h>
#include<stdbool.h>

int main(){
    srand(time(0));
    int num = rand()%100 + 1;

    int number_of_limit = 10;

    while (number_of_limit>0) {
        int inputNum;
        scanf("%d",&inputNum);

        if (inputNum == num) {
            printf("You are right\n");
            break;
        } else if (inputNum > num) {
            printf("Guess smaller\n");
        } else {
            printf("Guess larger\n");
        }
        number_of_limit--;
    }

    number_of_limit == 0 && printf("You failed");

    return 0;
}
