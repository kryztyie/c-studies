// Program: Prime Number Checker
// Description: Asks the user for a number and checks
// if it is a prime number using a function.
//

#include <stdio.h>
#include <math.h> // Needed for sqrt()

// Function prototype
int isPrime(int n);

int main(void) {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}

// Function that returns 1 if number is prime, 0 otherwise
int isPrime(int n) {
    if (n <= 1) {
        return 0; // Numbers <= 1 are not prime
    }

    // Check divisors from 2 to sqrt(n)
    for (int i = 2; i <= (int)sqrt(n); i++) {
        if (n % i == 0) {
            return 0; // Found a divisor, not prime
        }
    }

    return 1; // No divisors found, number is prime
}
