// Print digits of given number.
#include<stdio.h>
void main(){
	int r,n,s=0,a=0;
	printf("enter a no.: ");
	scanf("%d",&n);
    while(n!=0){
    r=n%10;
    s=s*10+r;
    n/=10;
	}
	while(s!=0){
    r=s%10;
    printf("%d\t",r);
    s/=10;
	}
	

}
