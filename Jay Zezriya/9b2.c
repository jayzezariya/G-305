#include"stdio.h"
int main(){
	int i,n;
	printf("enter a no.: ");
	scanf("%d",&n);
	while(n!=0){
		if(n>=1000){
			printf("M");
			n=n-1000;
		}
		if(n>=900){
			printf("CM");
			n=n-900;
		}
		if(n>=500){
			printf("D");
			n=n-500;
		}
		if(n>=400){
			printf("CD");
			n=n-400;
		}
	        if(n>=100){
			printf("C");
			n=n-100;
		}
		if(n>=90){
			printf("CM");
			n=n-90;
		}
		if(n>=50){
			printf("L");
			n=n-50;
		}
		if(n>=40){
			printf("XL");
			n=n-40;
		}
		if(n>=10){
			printf("X");
			n=n-10;
		}
		if(n>=9){
			printf("IX");
			n=n-9;
		}
		if(n>=5){
			printf("V");
			n=n-5;
		}
		if(n>=4){
			printf("IV");
			n=n-4;
		}
		if(n>=1){
			printf("I");
			n=n-1;
		}
	}
}