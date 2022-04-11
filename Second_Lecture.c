#include<stdio.h>

int main(){

//    Data Type
    int price = 65.6;
    printf("Price = %d\n",price);

    float temp =41.5;
    printf("Temp = %f\n",temp);

    double temp2 = 45.4455236;
    printf("Temp2 = %lf\n",temp2);

    char character = 'B';
    printf("Character = %c\n",character);


//  Get input from user
    int marks_english;
    int marks_math;

    printf("Enter marks of english: ");
    scanf("%d",&marks_english);
    printf("Enter marks of math: ");
    scanf("%d",&marks_math);

    int total_marks = marks_english + marks_math;
    printf("Total Marks = %d\n",total_marks);


//  Arithmatic Operators
    double num1, num2;
    printf("Please enter two number: ");
    scanf("%lf %lf", &num1, &num2);

    double sum = num1+num2;
    printf("%lf + %lf = %lf\n",num1,num2,sum);

    double sub = num1-num2;
    printf("%lf - %lf = %lf\n",num1,num2,sub);

    double multiply = num1*num2;
    printf("%lf * %lf = %lf\n",num1,num2,multiply);

    double divide= num1/num2;
    printf("%lf / %lf = %lf\n",num1,num2,divide);


//  Assignment Operators
    int price1;

    price1 = 20;
    printf("Price = %d\n",price1);

    price1 += 30;
    printf("Price = %d\n",price1);

    printf("Price = %d\n",price1++);
    printf("Price = %d\n",price1);

    printf("Price = %d\n",price1--);
    printf("Price = %d\n",price1);

    printf("Price = %d\n",--price1);

    printf("Price = %d\n",++price1);


//  Type conversion
    double realNumber = 5.63;
    int number = realNumber;
    printf("number  = %d, realNumber = %lf\n",number,realNumber);

    int number1, number2;

    number1 = 30,number2 = 7;

    double divide1 = (double)number1 / (double)number2;
    printf("%d / %d = %lf\n",number1,number2,divide1);


//  Circle area & Perimeter
    double radius;

    printf("Enter radius: ");
    scanf("%lf",&radius);

    const double PI = 3.1416;

    double perimeter = 2 * PI * radius;
    printf("Perimeter = %lf\n",perimeter);

    double area = PI * radius * radius;
    printf("Perimeter = %lf\n",area);

    return 0;
}
