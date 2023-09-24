#include<stdio.h>
void main(){
    float a,b;
    char c;
    printf("enter a operater to perform(+,-,*,/): ");
    scanf("%c",&c);
    printf("enter 2 two numbers: ");
    scanf("%f %f",&a,&b);
    if(c=='+'){
    	printf("sum = %f",a+b);
	}
	if(c=='-'){
    	printf("subtraction = %f",a-b);
	}
	if(c=='*'){
    	printf("Multipication = %f",a*b);
	}
	if(c=='/'){
    	printf("Division = %f",a/b);
	}
}