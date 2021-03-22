// Write a C program to calculate the factorial of a given number using recursion.

#include <stdio.h>


long int factorial(int n)
{

    if (n >= 1)
        return n * factorial(n - 1);
    else
        return 1;
}

int main(){
  
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Factorial of %d = %ld", n, factorial(n));

    return 0;
}

