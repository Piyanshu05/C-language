#include<stdio.h>         /*Print Sum Of Series 1 + 4 + 9 + 16 + 25 + 36 + ... + n..*/
void main() 
{  
    int num, count = 1;  
  
    printf("Enter A Integer Number:\n");  
    scanf("%d", &num);  
  
    while(count <= num)  
    {  
        printf("%d + ", (count*count));  
        count++;  
    }  
}  