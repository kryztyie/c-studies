// Program: Swap Two Integer Values
// Description:
// This program reads two integer numbers from the user,
// swaps their values using pointers, and then displays
// the values before and after the swap.

#include <stdio.h>

//Function prototype
void swapValues(int *x, int *y);

int main(void)
{
    int a, b;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Enter another number: ");
    scanf("%d", &b);

    printf("\nBefore swapping:\n");
    printf("a = %d\tb = %d\n", a, b);

    swapValues(&a, &b);

    printf("\nAfter swapping:\n");
    printf("a = %d\tb = %d\n", a, b);

    return 0;
}

// Swaps the values of two integers using pointers
void swapValues(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}
