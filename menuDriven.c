// Write a Menu Driven Program to design a calculator for :-
//         a. Arithmetic operation on two numbers.
//         b. Exponent of a number.
//         c. Logarithm of a number.

#include <stdio.h>
#include <math.h>
int main()
{
    float num1, num2, ans;
    int base, exp, nu;
    int result = 1;
    double n, res;
    int ch;
    do
    {
        //Displaying menu
        printf("\n..........MAIN MENU..........");
        printf("\n 1.Addition");
        printf("\n 2.Subtraction");
        printf("\n 3.Multiplication");
        printf("\n 4.Division");
        printf("\n 5.Exponent of a number");
        printf("\n 6.Logarithm of a number");
        printf("\n 7.Absolute value of a number");
        printf("\n 8.EXIT\n");
        printf("\n Enter your choice:");
        scanf("%d", &ch);
        switch (ch) // applying switch case
        {
        case 1:
            printf("\n Enter the first number :");
            scanf("%d", &num1);
            printf("\n Enter the second number :");
            scanf("%d", &num2);
            ans = num1 + num2;
            printf("\n The addition of 2 numbers is: %							f", ans);
            break;
        case 2:
            printf("\n Enter the first number :");
            scanf("%d", &num1);
            printf("\n Enter the second number :");
            scanf("%d", &num2);
            ans = num1 - num2;
            printf("\n The subtraction of 2 numbers is:%					          f", ans);
            break;
        case 3:
            printf("\n Enter the first number :");
            scanf("%d", &num1);
            printf("\n Enter the second number :");
            scanf("%d", &num2);
            ans = num1 * num2;
            printf("\n The multiplication of 2 numbers 							is: %f", ans);
            break;
        case 4:
            printf("\n Enter the first number :");
            scanf("%d", &num1);
            printf("\n Enter the second number :");
            scanf("%d", &num2);
            ans = num1 / num2;
            printf("\n The division of 2 numbers is: %							f", ans);
            break;
        case 5:
            printf("Enter a base number:");
            scanf("%d", &base);
            printf("Enter an exponent:");
            scanf("%d", &exp);
            while (exp != 0)
            {
                result *= base;
                --exp;
            }
            printf("Answer = %d", result);
            break;
        case 6:
            // here base=e
            printf("\nEnter a number to calculate 							logarithm:");
            scanf("%lf", &n);
            res = log(n);
            printf("The logarithm of %lf =%lf", n, res);
            break;
        case 7:
            printf("Enter a positive or negative number							\n");
            scanf("%d", &nu);
            printf("Absolute Value of |%d| is  %d							\n", nu, abs(nu)); // applying formula
            break;
        case 8:
        default: //error message for wrong choice
            printf("\nYou entered a wrong choice");
            break;
        }
    } while (ch != 8);
    return 0;
}