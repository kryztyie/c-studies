// Program: Find the Biggest Number in an Array
// Description:
// Asks the user for three numbers, stores them in
// an array, and determines the largest number using functions.

#include <stdio.h>

// Function prototypes
void askNumbers(double *array, int size);
double findBiggest(double *array, int size);

int main(void)
{
    double numbers[3];

    askNumbers(numbers, 3);

    double biggest = findBiggest(numbers, 3);

    printf("\nThe biggest number is: %.2f\n", biggest);

    return 0;
}

// Function: Enter numbers and stores them in array
void askNumbers(double *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%lf", &array[i]);
    }
}


// Function: Returns the largest value in a double array.
double findBiggest(double *array, int size)
{
    double big = array[0];

    for (int i = 1; i < size; i++)
    {
        if (array[i] > big)
        {
            big = array[i];
        }
    }

    return big;
}
