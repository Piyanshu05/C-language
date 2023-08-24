#include<stdio.h>
void main(){
	int y,w,d;
	printf("enter value in days:", d);
	scanf("%d", &d);
	y=(d/365);
	w=(d-(365*y))/7;
	d=(d-(365*y)-(w*7));
	printf("Year:%04d Week:%02d Day:%02d",y,w,d);
}
