#include<stdio.h>

void main(){
	int v,w,x,y,z;
	float per;
	
	printf("enter marks of five subjects: ");
	scanf("%d %d %d %d %d",&v,&w,&x,&y,&z);
	per=(v+w+x+y+z)/5.0;
	
	if(per<35){
		printf("failed");
	}
	else if(per>=35 && per<45){
		printf("you got passing score");
	}
	else if(per>=45 && per<60){
		printf("passed with second class");
	}
	else if(per>=60 && per<70){
		printf("passed with first class");
	}
	else{
		printf("distiguesed");
	}
}