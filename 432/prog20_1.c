#include<stdio.h>
void main(){
	int n;
	printf("Enter a number=");
	scanf("%d",&n);
	if((n|1)>n)
	{
	printf("%d is even",n);
	}
	else
	{
	printf("%d is odd",n);
	}
}
