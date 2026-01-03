// Program: Fibonacci sequence up to N
// Description:
// Generates and prints the Fibonacci sequence up to N terms.

#include <stdio.h>

int main(void)
{
    int n;
    int first = 0;
    int second = 1;
    int next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci sequence:\n");

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            printf("%d ", first);
        } else if (i == 1) {
            printf("%d ", second);
        } else {
            next = first + second;
            printf("%d ", next);
            first = second;
            second = next;
        }
    }

    printf("\n");

    return 0;
}
