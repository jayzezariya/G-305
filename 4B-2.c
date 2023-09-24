#include<stdio.h>

void main(){

	float p,r,t;
	printf("Enter Principle value:");
	scanf("%f",&p);
	printf("Enter Rate of Intrest value:");
	scanf("%f",&r);
	printf("Enter Time Period:");
	scanf("%f",&t);
	printf("Simple Intrest = %f Rs.",p*r*t/100);
    
}