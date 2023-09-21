  /*Read 3 Numbers, Multiply Largest Number From First Two Numbers To Third One Using Switch..*/

#include<stdio.h>      
void main()
{
    int a, b, c, big, sum;
    printf("Enter The Value Of Int:");
    scanf("%d %d %d", &a, &b, &c);
    
    switch (a > b && a > c ? 1 : (b > a && b > c ? 2 : 3))
    {
    {
        case 1:
            big = (a);
            sum = (a*(b*c));
        break;
    }
    {
        case 2:
            big = (b);
            sum = (b*(a*c));
        break;
    }
    {
        case 3:
            big = (c);
            sum = (c*(a*b));
        break;
    }
    }
    printf("The Largest Number Is = %d.\nSum Of Largest To Two Number Is = %d.", big, sum);
}