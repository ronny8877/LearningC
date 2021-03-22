/*
Write a C program to enter a floating point number and print the integer and fractional part of that number.        
*/

#include <stdio.h>
#include <math.h>
int main()
{
    //Define temporary variables
    double value;
    double i, f;
    //Assign the value we will calculate the modf of
    value = 1.7;
    // Calculate the modf of the value returning the fractional and integral part
    f = modf(value, &i);
    //Display the result of the calculation
    printf("The Integral and Fractional parts of %f are %f and %f\n", value, i, f);
    return 0;
}
