#include<stdio.h>
void main(){
	int u;
	float bill;
	printf("Enter units of electricity used: ");
	scanf("%d",&u);
	if(u<=50){
		bill=u*0.5+((u*0.5)/5);
		printf("elec. bill= %f",bill);
	}
	else if(u>50 && u<=150){
		bill=(u-50)*0.75+25+(((u-50)*0.75+25)/5);
		printf("elec. bill= %f",bill);
	}
	else if(u>150 && u<=250){
		bill=(u-150)*1.2+100+(((u-150)*1.2+100)/5);
		printf("elec. bill= %f",bill);
	}
	else{
		bill=(u-250)*1.5+220+(((u-250)*1.5+220)/5);
		printf("elec. bill= %f",bill);
	}
}