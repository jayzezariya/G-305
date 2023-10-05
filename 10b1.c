// Print digits of given number.
#include<stdio.h>
void main(){
	int i=1,n,s=0;
	printf("enter a no.: ");
	scanf("%d",&n);
    while(i<n){
	if(n%i==0){s=s+i;}i++;
	}
    if(s==n){
    	printf("the no. is perfect");
	}
	else{
    	printf("the no. is not perfect");
	}
}
