// Find whether the given number is prime or not.
#include<stdio.h>
void main(){
	int i=2,count=0,n;
	printf("enter a no.: ");
	scanf("%d",&n);
    while(i<n){
    if(n%i==0){count++;}i++;
	}
	if(count==0){
		printf("given number is prime");
	}
	else{
		printf("given number is non-prime");
	}
}
