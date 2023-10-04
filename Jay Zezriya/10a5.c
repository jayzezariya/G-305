//Print given number in reverse order.
// Print digits of given number.
#include<stdio.h>
int main(){
	int r,n,s=0;
	printf("enter a no.: ");
	scanf("%d",&n);
    while(n!=0){
    r=n%10;//3,2,1
    s=s*10+r;//3,32,321
    n/=10;//12,1,0
	}
    printf("reverse of given no. is %d",s);
}
