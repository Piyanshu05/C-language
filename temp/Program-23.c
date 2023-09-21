/*Enter Basic Salary Of An Employee And Calculate Gross Salary According To Given Conditions :-
           - Basic Salary >= 10000 : HRA = 20% of Basic, DA = 80% of Basic
           - Basic Salary >= 20000 : HRA = 25% of Basic, DA = 90% of Basic
           - Basic Salary >= 30000 : HRA = 30% of Basic, DA = 95% of Basic..*/
#include <stdio.h>                      
void main()
{
    float Basic, Gross, DA, HRA;

    /* Input basic salary of employee */
    printf("Enter basic salary of an employee: ");
    scanf("%f", &Basic);


    /* Calculate D.A and H.R.A according to specified conditions */
    
    /*Extra Condition Start..*/
    if(Basic <= 10000)
    {
        DA  = Basic * 0.07;
        HRA = Basic * 0.15;
    }
    /*Extra Condition Over..*/
    else if(Basic >= 10000 && Basic < 20000)
    {
        DA  = Basic * 0.8;
        HRA = Basic * 0.2;
    }
    else if(Basic >= 20000 && Basic < 30000)
    {
        DA = Basic * 0.9;
        HRA= Basic * 0.25;
    }
    else if(Basic >= 30000)
    {
        DA  = Basic * 0.95;
        HRA = Basic * 0.3;
    }

    /* Calculate gross salary */
    Gross = Basic + HRA + DA;

    printf("GROSS SALARY OF EMPLOYEE = %0.0f", Gross);

}