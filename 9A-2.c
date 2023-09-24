#include<stdio.h>
void main(){
	int i=1,n;
	printf("enter an int: ");
	scanf("%d",&n);
	while(i<=10){
		printf("%d X %d = %d\n",n,i,n*i);
		i++;
	}
}
