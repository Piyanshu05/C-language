#include<stdio.h>    /*Check For Equality Of Two Numbers Without Using Arithmetic Or Comparison Operator..*/
void main() 
{
    int x, y;
    printf("Give The Value Of x And y:");
    scanf("%d %d", &x, &y);
    if (!(x ^ y)) {
        printf ("x=%d is equal to y=%d\n", x, y);
    }
    else {
        printf ("x=%d is not equal to y=%d\n", x, y);
    }
}
