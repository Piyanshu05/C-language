#include<stdio.h>                /*Check Whether Character Is An Alphabet Or Not Using Conditional Operator..*/
void main()
{
    char ch;
    printf("Enter The Character:");
    scanf("%c", &ch);
    
    /*Conditional Operation..*/
    (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') ? printf("It Is An Alphabet..") : printf("It Is Not An Alphabet..");
}