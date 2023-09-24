#include<stdio.h>
void main(){
	int a;
	printf("Enter an integer: ");
	scanf("%d",&a);
	(a%2==0)?printf("the int is even"):printf("the int is odd");
}