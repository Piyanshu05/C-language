#include<stdio.h>             /*Check Whether Number Is Even Or Odd Using Conditional Operator..*/
void main()
{
   int n;
   printf("Enter an integer\n");
   scanf("%d",&n);
 
   n%2 == 0 ? printf("Even number\n") : printf("Odd number\n");

}
 