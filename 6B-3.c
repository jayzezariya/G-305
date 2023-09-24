#include<stdio.h>
void main(){
    int a,b,c,A,B,C;
    printf("enter 3 sides of triangle: ");
    scanf("%d %d %d",&a,&b,&c);
    A=a*a; B=b*b; C=c*c;
    if(a+b>c||a+c>b||b+c>a){
        if(a==b && b==c){
            printf("it is an equilatral triangle");
        }
        else if(a==b || b==c || c==a){
            printf("it is an isoscalen triangle");
        }
        else if(A==B+C || B==A+C || C==A+B){
            printf("it is a right-angled triangle");
        }
        else{printf("it is a scalene triangle");}
    }
    else{printf("it is not closed triangle");}
}