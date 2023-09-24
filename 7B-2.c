#include"stdio.h"
void main(){
	char c;
	printf("Enter any character: ");
	scanf("%c",&c);
	((c>='a' && c<='z')||(c>='A' && c<='Z'))?printf("entered character is alphabate"):printf("entered character is not alphabate");
		
	}