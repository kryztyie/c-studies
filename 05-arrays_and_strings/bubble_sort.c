// Program: Sort an Array Using Bubble Sort
// Description:
// This program sorts an integer array in ascending order
// using the Bubble Sort algorithm.

#include <stdio.h>

#define ARRAY_SIZE 8

int main(void)
{
    int numbers[ARRAY_SIZE] = {27, 12, 456, 34, 67, 345, 55, 95};
    int i, j;
    int temp;

    printf("Array before sorting:\n");
    for (i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Bubble Sort 
    for (i = 0; i < ARRAY_SIZE - 1; i++) {
        for (j = 0; j < ARRAY_SIZE - 1 - i; j++) {
            if (numbers[j] > numbers[j + 1]) {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    printf("Array after sorting:\n");
    for (i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
