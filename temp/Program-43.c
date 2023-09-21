#include <stdio.h>      /*Print Odd Numbers Between 1 To 10 Then Modify 1 To n Using While And Do While Loop..*/
void main()
{
     int n;
     printf("Enter the number :--> ");
     scanf("%d",&n);
     int i = 1;
     printf("The odd numbers are :--> ");
     while(i < n)
     {
          if(i % 2 != 0)
          {
               printf("%d ",i);
          }
          i++;
     }
}
