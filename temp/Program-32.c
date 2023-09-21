#include<stdio.h>            /*Print Day Name Of Week Using Switch..*/
void main()
{
    int days;
    printf("Enter The Number Of Days in Week:");
    scanf("%d", &days);
    
    switch (days)
    {
    case 1:
    printf("First Day Is Monday");
        break;
    case 2:
    printf("Second Day Is Tuesday");
        break;
    case 3:
    printf("Third Day Is Wednesday");
        break;
    case 4:
    printf("Fourth Day Is Thursday");
        break;
    case 5:
    printf("Fifth Day Is Friday");
        break;
    case 6:
    printf("Sixth Day Is Saturday");
        break;
    case 7:
    printf("Seventh Day Is Sunday");
        break;
    default:
    printf("Out The Box");
        break;
    }
}