// Program: Sum of Two Numbers Using Pointers
// Description:
// This program reads two floating-point numbers from the user,
// calculates their sum using pointers, and displays the result.

#include <stdio.h>

// Function prototype
double sum(double *x, double *y);

int main(void)
{
    double a, b;
    double result;

    printf("Enter the first number to sum: ");
    scanf("%lf", &a);

    printf("Enter the second number to sum: ");
    scanf("%lf", &b);

    result = sum(&a, &b);

    printf("\nResult:\n");
    printf("%.2f + %.2f = %.2f\n", a, b, result);

    return 0;
}


//Returns the sum of two numbers using pointers.
double sum(double *x, double *y)
{
    return *x + *y;
}
