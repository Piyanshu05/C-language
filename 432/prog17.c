#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter first number=");
	scanf("%d",&a);
	printf("enter second number=");
	scanf("%d",&b);
	printf("enter third number=");
	scanf("%d",&c);
	if(a>b){
		if(a>c){
			printf("a is largest");
		}
			else
			{
				printf("c is largest");
			}
		}
	else{
		if(b>c){
			printf("b is largest");
		}
		else{
		printf("c is largest");
		}
	}
	}

