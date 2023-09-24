#include<stdio.h>

void main(){
    int a,b,c;

    printf("Enter number a= ");
    scanf(" %d" ,&a);
    printf("Enter number b= ");
    scanf(" %d" ,&b);
    c=a,a=b,b=c;
    printf("a = %d, b = %d" ,a,b);

}