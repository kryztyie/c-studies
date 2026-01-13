// Program: Number Reverser
// Description: Asks the user for an integer number
// and prints the reversed version of that number.

#include <stdio.h>

// Function prototype
int reverseNumber(int number);

int main(void)
{
    int number;
    int reversed;

    printf("Enter an integer number: ");
    scanf("%d", &number);

    reversed = reverseNumber(number);

    printf("Reversed number: %d\n", reversed);

    return 0;
}

int reverseNumber(int number)
{
    int reversed = 0;
    int sign = 1;

    if (number < 0)
    {
        sign = -1;
        number = -number;
    }

    while (number > 0)
    {
        reversed = reversed * 10 + (number % 10);
        number /= 10;
    }

    return reversed * sign;
}
