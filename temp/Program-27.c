/*Input Electricity Unit Charge And Calculate The Total Electricity Bill According To The Given Condition:-
  -         For First 50 Units Rs. 0.50/Unit
  -         For Next 100 Units Rs. 0.75/Unit
  -         For Next 100 Units Rs. 1.20/Unit
  -         For Unit Above 250 Rs. 1.50/Unit
  -         An Additional Surcharge Of 20% Is Added To The Bill..*/
#include <stdio.h>
void main()
{
    int unit;
    float amt, total_amt, sur_charge;

    /* Input unit consumed from user */
    printf("Enter total units consumed: ");
    scanf("%d", &unit);


    /* Calculate electricity bill according to given conditions */
    if(unit <= 50)
    {
        amt = unit * 0.50;
    }
    else if(unit <= 150)
    {
        amt = 25 + ((unit-50) * 0.75);
    }
    else if(unit <= 250)
    {
        amt = 100 + ((unit-150) * 1.20);
    }
    else
    {
        amt = 220 + ((unit-250) * 1.50);
    }

    /*
      Calculate total electricity bill
      after adding surcharge
     */
    sur_charge = amt * 0.20;
    total_amt  = amt + sur_charge;

    printf("Electricity Bill = Rs. %.2f", total_amt);
}