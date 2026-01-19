// Program: Modify Array Values
// Description:
// This program asks the user to enter three numbers, prints the array,
// allows the user to change the numbers, and prints the updated array.

#include <stdio.h>

// Function prototypes
void askNumbers(double *array, int size);
void printArray(const char *title, double *array, int size);
void changeValues(double *array, int size);

int main(void)
{
    double numbers[3];

    askNumbers(numbers, 3);
    printArray("Original Array", numbers, 3);
    changeValues(numbers, 3);
    printArray("Updated Array", numbers, 3);

    return 0;
}

// Ask the user to enter numbers into the array
void askNumbers(double *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%lf", &array[i]);
    }
}

// Print the array values with a title
void printArray(const char *title, double *array, int size)
{
    printf("\n%s:\n", title);
    for (int i = 0; i < size; i++)
    {
        printf("Element %d = %.2f\n", i + 1, array[i]);
    }
}

// Change the values in the array
void changeValues(double *array, int size)
{
    printf("\nChange the numbers:\n");
    for (int i = 0; i < size; i++)
    {
        printf("Enter new number %d: ", i + 1);
        scanf("%lf", &array[i]);
    }
}
