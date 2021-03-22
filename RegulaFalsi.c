// Regula Falsi 

#include<stdio.h>
#include<conio.h>
#include<math.h>


float func(float x){
    return (x - exp(-x));
}


void main(){


int i=0 ,pos=0 ;
float x0 =0 ,x1=1,x2=0,fx2=0;
while(1){

if(func(i)==0) printf("Exact root is %d" , i);
if(func(i)*func(i+1)<0){pos++; break;}
i++;
if(pos){
    x0=i;
    x1=i+1;
    printf("Range of of the function is %.0f and %.0f ", x0 ,x1 );

    printf("Regula Falsi Method \n");
    printf("\n \t \t Calculation Table \t \t \n");
x2= (x0-((x1-x0)* func(x0)) /(func(x1)-func(x0)));
fx2= func(x2);
printf("\ti\tx0\t\tx1\t\tx2\t\tfx2");

for (i = 0;; i++)
{
    printf("\n\t%d\t%f\t%f\t%f\t%f\t\n", i, x0, x1, x2, fx2);
    if ((float)fabs(x2 - x1) < 0.0001f || (float)fabs(x2 - x0) < 0.0001f)
        break;
    if (func(x1) > 0)
        x1 = x2;

    else
        x0 = x2;
    x2 = (x0 - ((x1 - x0) * func(x0)) / (func(x1) - func(x0)));
}
}

printf("\n");
printf("root of the function is=%.4f \n", x2);
getch();
}


}
