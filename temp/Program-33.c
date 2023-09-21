#include<stdio.h>           /*Print Number Of Days In A Month Using Switch..*/
void main()
{
    int Month;
    printf("Enter The Number Of Month:");
    scanf("%d", &Month);

    switch (Month)
    {
    case 1:
        printf("Month :- January\t Days :- 31");
    break;
    case 2:
        printf("Month :- February\t Days :-28 ");
    break;
    case 3:
        printf("Month :- March\t Days :- 31");
    break;
    case 4:
        printf("Month :- April\t Days :- 30");
    break;
    case 5:
        printf("Month :- May\t Days :- 31");
    break;
    case 6:
        printf("Month :- June\t Days :- 30");
    break;
    case 7:
        printf("Month :- July\t Days :- 31");
    break;
    case 8:
        printf("Month :- August\t Days :- 31");
    break;
    case 9:
        printf("Month :- September\t Days :- 30");
    break;
    case 10:
        printf("Month :- October\t Days :- 31");
    break;
    case 11:
        printf("Month :- November\t Days :- 30");
    break;
    case 12:
        printf("Month :- December\t Days :- 31");
    break;

    default:
        printf("Out Of The Box:");
        break;
    }
}