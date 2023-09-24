#include<stdio.h>
void main(){
	int a,b,c;
	printf("enter three numbers: ");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b){
		printf("the product is %d",a*c);
	}
	else{
		printf("the product is %d",b*c);
	}
}