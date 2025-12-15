//   Program: Factorial Calculator
//   Description:
//   Reads an integer from the user and
//   calculates its factorial using a for loop.
//

#include <stdio.h>

int main(void)
{
    int number;
    int factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++){
        factorial = factorial * i;
    }

    printf("\nFactorial result: %d\n", factorial);

    return 0;
}
