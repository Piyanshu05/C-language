#include<stdio.h>
void main(){
	float F,C;
	printf("Enter temperature in F=");
	scanf("%f",&F);
	C=((F-32)*5)/9;
	printf("%f",C);
}
