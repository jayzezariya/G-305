#include<stdio.h>
void main(){
	int m;
	printf("enter no. of month(from 1 to 12)\n(if it is a leap year enter 14 for fabuary): ");
	scanf("%d",&m);
	switch(m){
	    case 1:printf("january has 31 days");
		break;
		case 2:printf("fabuary has 28 or 29 days");
		break;
		case 3:printf("march has 31 days");
		break;
		case 4:printf("april has 30 days");
		break;
		case 5:printf("may has 31 days");
		break;
		case 6:printf("june has 30 days");
		break;
		case 7:printf("july has 31 days");
		break;
		case 8:printf("august has 31 days");
		break;
		case 9:printf("september has 30 days");
		break;
		case 10:printf("october has 31 days");
		break;
		case 11:printf("november has 30 days");
		break;
		case 12:printf("december has 31 days");
		break;
		case 14:printf("fabuary in leap year has 29 days");
	}
}