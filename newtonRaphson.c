#include <math.h>
#include <stdio.h>
#include <conio.h>

#define MAX 8

float f(float x);
float f1(float x);

void main ( ){
float a,b,c,d;
int i,j,n;
printf(" \n Enter the number of interations :");
scanf("%d",&n);
for(i=-MAX; i<MAX; i++){
    a=i;
    b=i+1;
    if( f(a)*f(b)<=0){
printf("\n The initial approximation value is : ");
c=(a+b)/2.0;
printf("%f",c);
printf("\n c \t fc(c) ");
for(j=0; j<n;j++){
    printf(" \n %-5d %15.6f %15.6f",j+1 ,c ,f(c));
    d=c-(f(c)/f1(c));
    c=d;

}

    }
}

}

float f(float x)
{
    return (cos(x) -3*x+1);
}

float f1(float y){
    return (-sin(y)-3);
}