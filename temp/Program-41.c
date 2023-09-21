#include<stdio.h>           /*Print The Number Of Days In a Month Considering Leap Year Using Switch..*/
void main()
{
    int year,month;
    printf("Enter The Month and Year:");
    scanf("%d %d", &month, &year);
    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        printf("Number of days is 31");
    else if((month == 2) && ((year%400==0) || (year%4==0 && year%100!=0)))
    {
        printf("Number of days is 29");
    }
    else if(month == 2)
    {
        printf("Number of days is 28");
    }	
    else
        printf("Number of days is 30");
}