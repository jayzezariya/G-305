#include"stdio.h"
void main(){
	int i=0,n;
	printf("enter an integer: ");
	scanf("%d",&n);
	while(i<=n){
		if(i%2==1){
			printf("%d\t",i);
		} 
		i=i+1;
	}
}