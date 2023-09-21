#include<stdio.h>     /*Find Factors Of The Given Number..*/
void main()
{
    int num, count=1;
    printf("Enter The Number:\t");
    scanf("%d", &num);
    printf("Factors Of %d Are:\t", num);
    while(count <= num)
    {
        if(num % count == 0)
        {
            printf("%d\t", count);
        }
        count++;
    }
}