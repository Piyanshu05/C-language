#include <stdio.h>         /*Calculate x^y Without Using Power Function..*/
void main() 
{
    int base, exp , result=1;
    printf("Enter a value of base: ");
    scanf("%d", &base);
    printf("Enter a value of exponent: ");
    scanf("%d", &exp);
    printf("%d to the power %d is = ", base, exp);
    while (exp != 0) {
        result = base * result;
        --exp;
    }
    printf("%d",result);
}