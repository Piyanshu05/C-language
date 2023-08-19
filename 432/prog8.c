#include<stdio.h>
void main(){
	float P,R,N,I;
	printf("Enter principal=");
	scanf("%f",&P);
	printf("Enter Rate=");
	scanf("%f",&R);
	printf("Enter Time=");
	scanf("%f",&N);
	I=(P*R*N)/100;
	printf("%f",I);
}
