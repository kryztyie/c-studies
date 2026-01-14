// Program: Find Maximum and Minimum Values in an Array
// Description:
// This program reads ten floating-point numbers from the user,
// stores them in an array, and determines the largest and
// smallest values among them.
//

#include <stdio.h>

int main(void) {
    double a[10];
    double big, little;
    int i;

    printf("Type the 1st number:\n");
    scanf("%lf", &a[0]);

    big = a[0];
    little = a[0];

    for (i = 1; i < 10; i++) {
        printf("Type the %dth number:\n", i+1);
        scanf("%lf", &a[i]);

        if (a[i] > big) {
            big = a[i];
        }

        if (a[i] < little) {
            little = a[i];
        }
    }

    printf("Biggest: %.2lf\n", big);
    printf("Smallest: %.2lf\n", little);

    return 0;
}
