// Print digits of given number.
#include<stdio.h>
int main(){
	int i=1,n,s=0;
	printf("enter a no.: ");
	scanf("%d",&n);
    while(i<n){
	if(n%i==0){s=s+i;}i++;//1,3,6
	}
    if(s==n){
    	printf("the no. is perfect");
	}
	else{
    	printf("the no. is not perfect");
	}
}
