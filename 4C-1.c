#include<stdio.h>

void main(){
    
	int h,m,s;
	printf("enter seconds: ");
	scanf("%d",&s);
	
	h=s/3600;
	m=(s-(h*3600))/60;
	s=s%60;
	printf("%d:%d:%d",h,m,s);

}