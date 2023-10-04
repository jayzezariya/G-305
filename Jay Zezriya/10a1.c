#include<stdio.h>
int main(){
	int f,l,n;
	printf("Enter a no.: ");
	scanf("%d",&n);
    l=n%10;
    f=n;
    while(f>=10){
    	f=f/10;
	}
	int s=f+l;
	printf("the sum of first & last digit: %d\t",s);
}
