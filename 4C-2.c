#include<stdio.h>

void main(){

	int d,w,y;
	printf("enter no. of days: ");
	scanf("%d",&d);
	
	y=d/365;
	w=(d-(y*365))/7;
	d=d-(y*365)-(w*7);
	printf("days = %d, weeks = %d, year = %d",d,w,y);
    
}