#include<stdio.h>                     //Input An Integer Number And Check The Last Digit Of Number Is Even Or Odd..
void main()
{
    int a;
    printf("\n Enter The Number:");
    scanf("%d", &a);
    if((a % 10) %2 ==0)
    {
        printf("Last Digit Of This Number Is Even");
    }
    else
    {
        printf("Last Digit Of This Number Is Odd");
    }

}