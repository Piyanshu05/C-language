#include<stdio.h>                         //Perform Addition, Subtraction, Multiplication And Division Of 2 Numbers As Per User’s Choice..
void main()                                       
{
    float num1, num2;
    char ch;
    printf("Enter First Number: ");
    scanf("%f", &num1);
    printf("Enter Second Number: ");
    scanf("%f", &num2);
    printf("Enter the Operator (+, -, *, /): ");
    scanf(" %c", &ch);
    if(ch=='+')
        printf("Result = %0.2f", num1+num2);
    else if(ch=='-')
        printf("Result = %0.2f", num1-num2);
    else if(ch=='*')
        printf("Result = %0.2f", num1*num2);
    else if(ch=='/')
        printf("Result = %0.2f", num1/num2);
    else
        printf("Wrong Operator");
}
