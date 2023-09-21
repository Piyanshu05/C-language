#include<stdio.h>     /*Print Number And Its Square Root For 0 To 9..*/
#include<math.h>
int main()
{
      int i=1;
      float square_roots;
      printf("Square roots of numbers from 1 to 9 are:\n\n");
      while(i<=9)
      {
            square_roots=sqrt(i);
            printf("\t%d = %.2f\n",i,square_roots);
            i++;
      }
}