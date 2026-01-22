// Program: Dynamic Memory Allocation Example
// Description: Demonstrates how to dynamically allocate
// memory for an integer using malloc, assign a value,
// print it, and properly free the allocated memory.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p;

    // Allocate memory for one integer
    p = malloc(sizeof(int));

    // Check if memory allocation was successful
    if (p == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    *p = 10;

    printf("%d\n", *p);

    free(p);

    return 0;
}
