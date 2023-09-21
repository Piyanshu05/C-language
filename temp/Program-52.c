#include<stdio.h>            /*Print The Sum of Series 1 - 2+3 - 4+5 - 6+7..n..*/
int main()
{
    int n;
    int sum=0,i;
    printf("Enter the range of number:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2==0)
            sum-=i;
        else
            sum+=i;
    }

    printf("The sum of the series = %d",sum);
}