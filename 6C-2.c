#include<stdio.h>
void main(){
    int R,B,G;
    float w,c,m,y,b,R1,B1,G1;
    printf("enter value of R G B: ");
    scanf("%d %d %d",&R,&B,&G);
    R1=R/255.0; B1=B/255.0; G1=G/255.0;
    if(R1>B1 && R1>G1){w=R1;}
    else if(G1>B1 && G1>R1){w=G1;}
    else{w=B1;}
    
    c=(w-R1)/w;
    m=(w-G1)/w;
    y=(w-B1)/w;
    b=1-w;
    printf("C M Y B: %f %f %f %f",c,m,y,b);
}