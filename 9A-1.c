#include<stdio.h>
void main(){
	int i=1,n,p=0,N=0;
	printf("Enter a value: ");
	scanf("%d",&n);
	while(i<=n){
		if(i%2==0){
			N=N+i;
		}
		else{
			p=p+i;
		}
		i++;
	}
	printf("%d",p-N);
}
