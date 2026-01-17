// Program: Guess a Number in an Array
// Description:
// This program allows the user to guess a number.
// The program checks whether the guessed number
// exists inside a predefined integer array.

#include <stdio.h>

#define ARRAY_SIZE 8

int main(void)
{
    int numbers[ARRAY_SIZE] = {27, 12, 456, 34, 67, 345, 55, 95};
    int guess;
    int i;
    int found;

    printf("Try to guess a number that is inside the array.\n");

    do {
        found = 0;

        printf("Enter a number: ");
        scanf("%d", &guess);

        for (i = 0; i < ARRAY_SIZE; i++) {
            if (guess == numbers[i]) {
                found = 1;
                break;
            }
        }

        if (found) {
            printf("You guessed a number correctly!\n");
        } else {
            printf("This number is not in the array. Try again.\n");
        }

    } while (!found);

    return 0;
}
