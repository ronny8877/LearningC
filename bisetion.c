//Program to find the root of a given equation using bisection method.
#include <math.h>
#include <stdio.h>

float func(float x)
{
    return ((x * x * x) - x - 1);
}
void main()
{
    int i = 0, pos = 0;
    float ai = 0, bi = 0, xi = 0, fxi = 0;
    while (1)
    {
        if (func(i) == 0)
            printf("exact root is %d", i);
        if (func(i) * func(i + 1) < 0)
        {
            pos++;
            break;
        }
        i++;
    }
    if (pos)
    {
        ai = i;
        bi = i + 1;
        printf("Range of the function is %.0f and %.0f", ai, bi);
        printf("\nBISECTION METHOID\n");
        printf("\n\t\tCALCULATION TABLE\n");
        xi = (ai + bi) / 2.0;

        printf("\ti\tai\t\tbi\t\txi\t\tfxi");
        for (i = 0;; i++)
        {
            printf("\n\t%d\t%f\t%f\t%f\t%f\n", i, ai, bi, xi, fxi);
            if ((float)fabs(ai - xi) < 0.0001f || (float)fabs(bi - xi) < 0.0001f)
                break;
            if (fxi < 0)
                ai = xi;
            else
                bi = xi;
            xi = (ai + bi) / 2.0;
            fxi = func(xi);
        }
        printf("\n");
        printf("root of the function is=%.4f \n", ai);
    }
}