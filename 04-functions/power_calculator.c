// Program: Power Calculator
// Description: Asks the user for a base and an exponent
// and calculates the power using the math library.
//

#include <stdio.h>
#include <math.h> // Required for pow()

// Function prototype
double calculatePower(double base, double exponent);


int main(void)
{
    double base, exponent;
    double result;

    printf("Enter the base and the exponent: ");
    scanf("%lf %lf", &base, &exponent);

    result = calculatePower(base, exponent);

    printf("Result: %.2f\n", result);

    return 0;
}


// Function definition
double calculatePower(double base, double exponent)
{
    return pow(base, exponent);
}
