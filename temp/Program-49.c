#include<stdio.h>        /*Print First 50 Numbers In Series 1, 4, 7, 10…*/
void main()
{
    int n=15,i=0;
    while (i<n)
    {
        if (i>1)
        {
            i+=2;
            printf("\t%d",i);
        }
        i++;
    }
    
}