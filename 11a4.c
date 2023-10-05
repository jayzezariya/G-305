// Calculate ???? without using power function. 
#include<stdio.h>
void main(){
	int i,x,y,v;
	printf("enter value for x & y(as in x^y): ");
	scanf("%d %d",&x,&y);
	v=x;
	for(i=1;i<y;i++){
		x=x*v;
	}
	printf("%d ^ %d: %d",v,y,x);
}
