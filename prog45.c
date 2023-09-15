#include<stdio.h>
void main(){
	int i=1,n, odd=0,even=0;
	while(i<=10){
	scanf("%d",&n);
	if(n%2==0){
		even+=1;
	}
	else{
		odd+=1;
	}
	i++;
	
	}
	printf("Count odd=%d",odd);
	printf("\nCount even=%d",even);
}

