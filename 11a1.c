//Print 1 to 10 then modify program print 1 to n.
#include<stdio.h>
void main(){
	int i,n;
	printf("enter a no.: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("%d\t",i);
	}
}
