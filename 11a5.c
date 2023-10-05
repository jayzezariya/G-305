//Find factorial of the given number.
#include<stdio.h>
void main(){
	int i,n,m=1;
	printf("enter a no.: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		m=m*i;
	}
	printf("%d! = %d",n,m);
}


