#include<stdio.h>

void main(){
	float a,f;
	printf("enter basic salary of employ: ");
	scanf("%f",&a);
	if(a<10000){
		f=a+(a*0.15)+(a*0.7);
		printf("gross salary is: %f",f);
	}
	if(a>=10000 && a<20000){
		f=a+(a*0.2)+(a*0.8);
		printf("Gross salary is: %f",f);
	}
	if(a>=20000 && a<30000){
		f=a+(a*0.25)+(a*0.9);
		printf("Gross salary is: %f",f);
	}
	if(a>=30000){
		f=a+(a*0.3)+(a*0.95);
		printf("Gross salary is: %f",f);
	}
}