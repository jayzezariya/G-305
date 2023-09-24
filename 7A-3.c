#include<stdio.h>
void main(){
    float a,b;
    char c;
    printf("enter a operater to perform(+,-,*,/): ");
    scanf("%c",&c);
    printf("enter 2 two numbers: ");
    scanf("%f %f",&a,&b);
    switch(c){
        case '+':printf("sum = %f",a+b);
        break;
        case '-':printf("subtraction = %f",a-b);
        break;
        case '*':printf("multiplication = %f",a*b);
        break;
        case '/':printf("division = %f",a/b);
        break;
    }
}