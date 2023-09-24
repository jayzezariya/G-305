#include<stdio.h>

void main(){

	float f;
	printf("Enter temp in Fahrenheit:");
	scanf("%f",&f);
	printf("Temp. in Celsius = %f C",(f-32)*5/9);

}