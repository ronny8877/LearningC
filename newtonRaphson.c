#include <stdio.h>
#include <math.h>

float f(float);
float derivative(float);

int main()
{
    float x;                 // x: approximation
    unsigned short i = 1, n; // n: number of iterations

    printf("FIRST APPROXIMATION: ");
    scanf("%f", &x);

    printf("ITERATIONS: ");
    scanf("%hu", &n);

    while (i <= n)
    {
        x = x - f(x) / derivative(x);
        i++;
    }

    printf("APPROXIMATE ROOT: %f \n", x);
    return 0;
}

float f(float x)
{ // f(x)
    return pow(x, 2) - 5;
}

float derivative(float x)
{ // f'(x)
    return 2 * x;
}