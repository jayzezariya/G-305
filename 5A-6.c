#include<stdio.h>

void main(){
	char x;
	printf("enter any one alphabate: ");
	scanf("%c",&x);
	if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U'){
		printf("it is a vowel");
	}
	else{
		printf("it is a consonant");
	}
}