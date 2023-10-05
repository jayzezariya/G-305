//Find the sum and average of different numbers which are accepted by user as many as user wants
#include<stdio.h>
void main(){
	int i=1,f,l,n,m,a=0;
	printf("how many numbers do you want average of?  ");
	scanf("%d",&n);
    while(i<=n){
    	printf("input a number: ");
    	scanf("%d",&m);
    	a=a+m;i++;
	}
	printf("average of all the no.: %d",a/n);
}       
                                                                                                                                                                            
