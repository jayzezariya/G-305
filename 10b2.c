//Find whether the given number is prime or not using flag.
#include<stdio.h>
void main(){
	int n,i=2,f=0;
	printf("Enter a no.: ");
	scanf("%d",&n);
	while(i<n){
		if(n%i==0){
			f++;
		}
		i++;
	}
	if(f==0){
		printf("Number is prime");
	}
	else{printf("Number is not prime");}
} 
