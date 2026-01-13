// Program: Even Number Counter
// Description: Counts the number of even numbers
// between 2 and a given positive integer.

#include <stdio.h>

// Function prototype
int countEvenNumbers(int number);

int main(void)
{
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    int evenCount = countEvenNumbers(number);

    printf("Number of even numbers from 2 to %d: %d\n", number, evenCount);

    return 0;
}

// Function Definition
int countEvenNumbers(int number)
{
    int count = 0;
    
    for (int i = 2; i <= number; i++)
    {
        if (i % 2 == 0)
        {
            count++;
        }
    }

    return count;
}
