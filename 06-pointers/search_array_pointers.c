// Program: Search Array Using Pointers
// Description: Searches for a value in an integer array
// using pointer arithmetic and returns a pointer to the
// found element or NULL if it is not found.

#include <stdio.h>

// Function prototype
int *searchElement(int *array, int size, int value);

int main(void)
{
    int numbers[] = {4, 8, 1, 9, 3};
    int size = 5;
    int value = 9;

    int *result = searchElement(numbers, size, value);

    if (result != NULL)
    {
        printf("Value found: %d\n", *result);
        printf("Address: %p\n", (void *)result);
    }
    else
    {
        printf("Value not found\n");
    }

    return 0;
}

// Function: Searches for a value in the array using pointers
int *searchElement(int *array, int size, int value)
{
    int *ptr = array;

    for (int i = 0; i < size; i++)
    {
        if (*ptr == value)
        {
            return ptr;
        }
        ptr++;
    }

    return NULL;
}
