#include"stdio.h"
void main(){
	int n,i,m;
	printf("enter two integer: ");
	scanf("%d %d",&n,&m);
	if(n<m){
		i=n;
		while(i>=n && i<=m){
		if(i%2==0){
			printf("%d\t",i);
		} 
		i=i+1;
	}
	
	}
	else{
		i=m;
	    while(i>=m && i<=n){
	    if(i%2==0){
			printf("%d\t",i);
		} 
		i=i+1;
	}
	}

}