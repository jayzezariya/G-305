#include<stdio.h>
void main(){
    int i=1,n;
    scanf("%d",&n);
    while(i<=n){
        i=i*i;
        i++;
    }
    printf("%d",i);
}
