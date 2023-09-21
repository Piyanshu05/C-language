 /*Print all integer greater than 100 and less than 200 that are divisible by 7 but not divisible by 5..*/
#include <stdio.h>        
void main()
{
   int i=101;
   printf("Numbers between 100 and 200, divisible by 7 but not divisible by 5 : \n");
   while(i<200)
   {
     if(i%7==0 && !(i%5==0))
     {
       printf("% 5d",i);
     }
     i++;
   }
}


