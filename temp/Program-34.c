/*Perform Addition, Subtraction, Multiplication And Division Of 2 Number As Per User’s Choice Using Switch..*/
#include<stdio.h>
void main()
{
    int num1, num2;
    char ch;

    printf("Enter  Operation");
    scanf("%c",&ch);

    printf("Enter The First Number :-");
    scanf("%d", &num1);
    printf("Enter The Second Number :-");
    scanf("%d", &num2);


    switch (ch)
    {
    case '+':
        printf("%d + %d =%d",num1,num2,num1+num2);
        break;
    case '-':
        printf("%d - %d =%d",num1,num2,num1-num2);
        break;
    case '*':
        printf("%d * %d =%d",num1,num2,num1*num2);
        break;
    case '/':
        if(num2)
        printf("%d / %d =%d",num1,num2,num1/num2);
        break;

    default:
        printf("Out Side The Condition");
        break;
    }

}