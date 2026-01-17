// Program: Calculate the Average of Numbers in an Array
// Description:
// This program reads ten floating-point numbers from the user,
// stores them in an array, and calculates their average.

#include <stdio.h>

#define ARRAY_SIZE 10

int main(void)
{
    double numbers[ARRAY_SIZE];
    double sum = 0.0;
    double average;
    int i;

    for (i = 0; i < ARRAY_SIZE; i++) {
        printf("Enter number %d: ", i + 1);

        if (scanf("%lf", &numbers[i]) != 1) {
            printf("Invalid input. Program terminated.\n");
            return 1;
        }

        sum += numbers[i];
    }

    average = sum / ARRAY_SIZE;

    printf("Average: %.2f\n", average);

    return 0;
}
