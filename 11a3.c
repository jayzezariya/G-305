// Print multiplication table of a given number.
#include<stdio.h>
void main(){
	int i,n;
	printf("enter an int: ");
	scanf("%d",&n);
	for(i=1;i<=10;i++){
		printf("%d X %d = %d\n",n,i,n*i);
	}
}
