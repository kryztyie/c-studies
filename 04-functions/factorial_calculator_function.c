// Program: Factorial Calculator Function
// Description: Asks the user for an integer 
// and calculates its factorial using a function.
//

#include <stdio.h>

// Function prototype
int factorialCalculate(int number);

int main(void) {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Check for negative numbers
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    int result = factorialCalculate(number);
    
    printf("\nFactorial result: %d\n", result);

    return 0;
}

// Function that calculates and returns the factorial of a number
int factorialCalculate(int number) {
    int factorial = 1; // Initialize factorial to 1

    for (int i = 1; i <= number; i++) {
        factorial = factorial * i;
    }

    return factorial;
}
