#include<stdio.h>
#include<stdlib.h>
void main()
{
    char ch;
    printf("Do You Want To ShutDown This Pc Now (Y/N) :");
    scanf("%c", &ch);
    if(ch == 'Y' || ch == 'y')
      system("c:\\windows\\system32\\shutdown /s");

}
