// Program: Dynamic Array Allocation
// Description: Dynamically allocates an integer array using
// malloc, fills it with sequential values, prints the array,
// and frees the allocated memory.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;

    // Read the size of the array
    scanf("%d", &n);

    // Dynamically allocate memory for n integers
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

    // Print the array elements
    for (int i = 0; i < n; i++)
    {
        printf("%d ", v[i]);
    }

    printf("\n");

    free(v);

    return 0;
}
