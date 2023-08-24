#include<stdio.h>
void main(){
	int h,m,s;
	printf("enter value in seconds:", s);
	scanf("%d", &s);
	h=(s/3600);
	m=(s-(3600*h))/60;
	s=(s-(3600*h)-(m*60));
	printf("%02d:%02d:%02d",h,m,s);
}
