#include"stdio.h"
void main(){
	int i=1,n,count_o=0,count_e=0;
	while(i<=10){
		printf("enter a no.: ");
		scanf("%d",&n);
		if(n%2==0){
			count_e=count_e+1;
		}
		else{count_o=count_o+1;}
		i++;
	}
	printf("%d are even and %d are odd no. from given no.",count_e,count_o);
}