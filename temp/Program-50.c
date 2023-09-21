#include<stdio.h>   /*Calculate The Square of Integer 1 Through 10..*/
void main()  
{  
    int N, count = 1, sum = 0;  
  
    printf("Enter the limit:");  
    scanf("%d", &N);  
  
    while(count <= N)  
    {  
        sum = sum + (count * count);  
        count++;  
    }  
    printf("Sum of squares of numbers from 1 to %d is %d.\n", N, sum);  
} 