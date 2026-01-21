// Program: Reverse Array Using Pointers
// Description: Reads five real numbers from the user,
// stores them in an array, and inverts the array
// using pointer manipulation.

#include <stdio.h>

// Function prototypes
void askNumbers(double *array, int size);
void reverseArray(double *array, int size);
void printArray(double *array, int size);

int main(void)
{
    double numbers[5];

    askNumbers(numbers, 5);

    reverseArray(numbers, 5);

    printf("\nArray inverted:\n");
    printArray(numbers, 5);

    return 0;
}

// Function: Reads numbers from the user and stores them in the array
void askNumbers(double *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%lf", &array[i]);
    }
}

// Function: Inverts the array using pointer manipulation
void reverseArray(double *array, int size)
{
    double temp;
    double *start = array;           // pointer to the beginning of the array
    double *end = array + size - 1;  // pointer to the end of the array

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

// Function: Prints the elements of the array
void printArray(double *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%.2f\n", array[i]);
    }
}
