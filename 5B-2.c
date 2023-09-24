#include<stdio.h>

void main(){
	int x,c;
	printf("Enter an Integer: ");
	scanf("%d",&x);
	c=x&1;
	if(c==1){
		printf("the number is odd");
	}
	else{
		printf("the number is even");
	}
}