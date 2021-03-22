// Write a C program to calculate power a given number using recursion.

#include <stdio.h>

long int power(int num , int pow )
{
    if (pow)
    {
        return (num * power(num, pow - 1));
    }
    return 1;
}

int main()
{

    int num , pow;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Enter a power: ");
    scanf("%d", &pow);

    printf("Power of %d = %ld", num, power(num , pow));
    return 0;
}
