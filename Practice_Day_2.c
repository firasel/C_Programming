////Problem 1
//#include<stdio.h>
//int main() {
//    int n;
//    scanf("%d",&n);
//    for(int i = 1; i <= n; i++){
//        i%2 == 0 && printf("%d\n",i);
//    }
//
//    return 0;
//}


////Problem 2
//#include<stdio.h>
//int main() {
//    int a,b;
//    scanf("%d %d",&a,&b);
//    a == 5 || b == 5 ? printf("true"):(a+b) == 5 ? printf("true") : (a-b) == 5 || (a-b) == -5 ? printf("true"):printf
//    ("false");
//
//    return 0;
//}


////Problem 3
//#include<stdio.h>
//int main() {
//    int a;
//    scanf("%d",&a);
//    (a%3==0 && a%7 == 0) ? printf("No") : (a%3 == 0 || a%7 == 0) && printf("Yes");
//
//    return 0;
//}


////Problem 4
//#include<stdio.h>
//int main() {
//    int a;
//    printf("Input a number between 1 to 12 to get the month name: ");
//    scanf("%d",&a);
//
//    switch(a){
//    case 1:
//        printf("January\n");
//        break;
//    case 2:
//        printf("February\n");
//        break;
//    case 3:
//        printf("March\n");
//        break;
//    case 4:
//        printf("April\n");
//        break;
//    case 5:
//        printf("May\n");
//        break;
//    case 6:
//        printf("June\n");
//        break;
//    case 7:
//        printf("July\n");
//        break;
//    case 8:
//        printf("August\n");
//        break;
//    case 9:
//        printf("September\n");
//        break;
//    case 10:
//        printf("October\n");
//        break;
//    case 11:
//        printf("November\n");
//        break;
//    case 12:
//        printf("December\n");
//        break;
//    default:
//        printf("Your input is wrong!\n");
//    }
//
//    return 0;
//}


////Problem 5
//#include<stdio.h>
//int main() {
//    int n,sum;
//    printf("Enter n: ");
//    scanf("%d",&n);
//
//    printf("Input %d integers:",n);
//    for(int i = 0; i < n; i++){
//        int num;
//        scanf("%d",&num);
//        (num % 2 == 0) && (sum += num);
//    }
//
//    printf("Sum of even integers = %d",sum);
//    return 0;
//}


////Problem 6
//#include<stdio.h>
//int main() {
//    int temp;
//    scanf("%d",&temp);
//
//    if(temp < 0){
//        printf("Freezing weather\n");
//    } else if(temp <= 10){
//        printf("Very Cold weather\n");
//    } else if(temp <= 20){
//        printf("Cold weather\n");
//    } else if(temp <= 30){
//        printf("Normal in Temp\n");
//    } else if(temp < 40){
//        printf("Its Hot\n");
//    }else{
//        printf("Its Very Hot\n");
//    }
//
//    return 0;
//}


////Problem 7
//#include<stdio.h>
//int main() {
//    int a,b,c;
//    scanf("%d %d %d",&a,&b,&c);
//
//    if((a == b) && (a == c) && (b == c)){
//        printf("This is an equilateral triangle.\n");
//    } else if((a == b) || (a == c) || (b == c)){
//       printf("This is an isosceles triangle.\n");
//    } else {
//        printf("This is an scalene triangle.\n");
//    }
//
//    return 0;
//}


////Problem 8
//#include<stdio.h>
//int main() {
//    char a;
//    scanf("%c",&a);
//
//    if((a == 'A') || (a == 'E') || (a == 'I') || (a == 'O') || (a == 'U') || (a == 'a') || (a == 'e') || (a == 'i') || (a == 'o') || (a == 'u')){
//        printf("Vowel\n");
//    } else {
//        printf("Consonant\n");
//    }
//
//    return 0;
//}


////Problem 9
//#include<stdio.h>
//int main() {
//    int n;
//    scanf("%d",&n);
//
//    for(int i = 1; i <= n; i++){
//      (i%3 == 0 && i%5 == 0)? printf("FizzBuzz\n") : i%3 == 0 ? printf("Fizz\n") : i%5 == 0 ? printf("Buzz\n") : printf("%d\n",i);
//    }
//
//    return 0;
//}


////Problem 10
//#include<stdio.h>
//int main() {
//    int n;
//    printf("Input number of terms: ");
//    scanf("%d",&n);
//
//    for(int i = 1; i <= n; i++){
//        printf("Number is : %d and cube of the %d is :%d\n",i,i,(i*i*i));
//    }
//
//    return 0;
//}


//Problem 11
#include<stdio.h>
int main() {
    int x,y;
    scanf("%d %d",&x,&y);

    for(int i = 1; i <= y; i++){
       i%x==0 && y%i==0 && printf("%d ",i);
    }

    return 0;
}
