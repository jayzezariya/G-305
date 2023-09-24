#include"stdio.h"
void main(){
	int i=1,n,sum=0;
	printf("enter an int: ");
	scanf("%d",&n);
	while(i<=n){
	sum=sum+(i*i);
	i++;
	}
	printf("%d",sum);
}