// Print digits of given number.
#include<stdio.h>
int main(){
	int r,n,s=0,a=0;
	printf("enter a no.: ");
	scanf("%d",&n);
    while(n!=0){
    r=n%10;//3,2,0
    s=s*10+r;//3,32,320
    n=n/10;//12,1,0
	}
	while(s!=0){
    r=s%10;
    printf("%d\t",r);
    s/=10;
	}
	

}
