#include<stdio.h>
void main(){
	int n,r,t,m=0;
	printf("enter a no.: ");
	scanf("%d",&n);
	t=n;
	while(n!=0){
		r=n%10;
		m=m*10+r;
		n=n/10;
	}
	if(m==t){
		printf("the entered number is palindrome");
	}
	else{
		printf("the entered number is not palindrome");
	}
}
