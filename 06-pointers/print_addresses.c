// Program: Print Values and Addresses of Variables
// Description:
// This program demonstrates the use of pointers by printing
// the values and memory addresses of two integer variables.

#include <stdio.h>

int main(void)
{
    int x = 10;
    int *p = &x;   // pointer to x
    int y = 20;
    int *q = &y;   // pointer to y

    printf("Variable x:\n");
    printf("  Value: %d\n", x);
    printf("  Address: %p\n", (void*)&x);
    printf("  Pointer p (stores address): %p\n", (void*)p);
    printf("  Value pointed to by p: %d\n\n", *p);
    
    printf("Variable y:\n");
    printf("  Value: %d\n", y);
    printf("  Address: %p\n", (void*)&y);
    printf("  Pointer q (stores address): %p\n", (void*)q);
    printf("  Value pointed to by q: %d\n", *q);

    return 0;
}
