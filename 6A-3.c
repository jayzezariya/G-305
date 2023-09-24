#include<stdio.h>

void main(){
	char c;
	printf("Enter any key: ");
	scanf("%c",&c);
	if(c>='a' && c<='z'){
		printf("it is a lower case alphabate");
	}
	else if(c>='A' && c<='Z'){
		printf("it is a upper case alphabate");
	}
	else if(c>='0' && c<='9'){
		printf("it is a digit");
	}
	else{
		printf("it is a special symbol");
	}
}