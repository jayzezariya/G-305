//Print given number in reverse order.
// Print digits of given number.
#include<stdio.h>
void main(){
	int r,n,s=0;
	printf("enter a no.: ");
	scanf("%d",&n);
    while(n!=0){
    r=n%10;
    s=s*10+r;
    n/=10;
	}
    printf("reverse of given no. is %d",s);
}
