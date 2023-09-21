#include<stdio.h>  /*Get 10 Numbers From User Print Count Of Odd, Even Numbers..*/
void main()
{
  int i=1,n,even=0,odd=0;
   printf("\n<--> Enter the Ending Value :");
   scanf("%d",&n);
   printf("\n--> Even Numbers :");
   while(i<=n)
   {
      if(i%2==0)
      {
        printf("\t%d",i);
        even++;
      }
      i++;
   
   }
   printf("\n--> Odd Numbers :");
   i=1;
   while(i<=n)
   {
     if(i%2==1)
     {
        printf("\t%d",i);
        odd++;
     }
     i++;
   }
   printf("\n--> Total Even Numbers : %d",even);
   printf("\n--> Total Odd Numbers : %d",odd);
}