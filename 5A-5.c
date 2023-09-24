#include<stdio.h>

void main(){
	int a,b,c;
	printf("Enter number: ");
	scanf("%d",&a);
	printf("Enter number: ");
	scanf("%d",&b);
	printf("Enter number: ");
	scanf("%d",&c);
	
	if(a>b && a>c){
		printf("%d is largest",a);
	}
	if(b>c && b>a){
		printf("%d is largest",b);
	}
	if(c>a && c>b){
		printf("%d is largest",c);
	}
}