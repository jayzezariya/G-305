#include<stdio.h>
int main(){
	char i='a',I='A';
	while(i<='z' && I<='Z'){
		printf("%c",i);printf("%c\t\n",I);
		i++; I++;
		
	}
}