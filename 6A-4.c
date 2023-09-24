#include<stdio.h>

void main(){
	int a;
	printf("Enter any integer no. : ");
	scanf("%d",&a);
	if((a%10)%2==0){
		printf("last digit is even");
	}
	else{
		printf("last digit is odd");
	}
}