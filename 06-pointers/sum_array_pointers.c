// Program: Sum Array Elements Using Pointers
// Description: Dynamically allocates an integer array,
// fills it with values, and calculates the sum of its
// elements using pointer arithmetic.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocate memory for the array
    int *v = malloc(n * sizeof(int));


    // Check if memory allocation was successful
    if (v == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }


    // Fill the array with values from 1 to n
    for (int i = 0; i < n; i++)
    {
        v[i] = i + 1;
    }

    int sum = 0;
    int *p = v;

    // Calculate the sum using pointers
    for (int i = 0; i < n; i++)
    {
        sum += *p;
        p++;
    }

    printf("Sum = %d\n", sum);

    free(v);

    return 0;
}
