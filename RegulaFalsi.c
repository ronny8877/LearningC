// C Program for Regula Falsi Method Source CodeC

#include <stdio.h>
#include <conio.h>
#include <math.h>

#define Max 8

float f(float x);
void main()
{

    float a, b, c, d;
    int i, j, n;

    printf(" \n Enter the number of iterations   ");
    scanf("%d", &n);

    for (i = -Max; i < Max; i++)
    {

        a = i;
        b = i + 1;
        if (f(a) * f(b) <= 0)
        {
            printf(" \n The initial approximate limits are \t");
            printf(" %f \t %f ", a, b);
            printf(" \n  a \t \t b  \t\t  c \t\t f(c)");

            for (j = 0; j < n; j++)
            {
                c = b - (f(b) / (f(b) - f(a))) * (b - a);
                printf(" \n %10.6f \t  %10.6f \t %10.6f \t %10.6f ", a, b, c, f(c));
                if (f(c) < 0)
                    a = c;
                else
                    b = c;
            }
        }
    }
}

float f(float x)
{
    return (cos(x) - x * exp(x));
}