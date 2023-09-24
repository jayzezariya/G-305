#include<stdio.h>
void main(){
    int a,b,c;
    printf("enter 3 numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    if((a>b && a<c)||(a>c && a<b)){
        printf("%d is second largest no.",a);
    }
    else if((b>c && b<a)||(b>a && b<c)){
        printf("%d is second largest no.",b);
    }
    else if((c>b && c<a)||(c>a && c<b)){
        printf("%d is second largest no.",c);
    }
    else {
        printf("enter unique numbers!");
    }
}