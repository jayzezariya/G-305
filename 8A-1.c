#include"stdio.h"
void main(){
	int i=1,n;
	printf("enter an integer: ");
	scanf("%d",&n);
	while(i<=n){
		printf("%d\t",i);
		i=i+1;
	}
}