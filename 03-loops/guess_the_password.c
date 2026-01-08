// Program: Guess the Password
// Description: Asks the user to enter a password
// until the correct answer is entered.
//

#include <stdio.h>

int main(void) {
    int password = 1234;
    int guess;

    do {
        printf("Enter the password (4 numbers): ");
        scanf("%d", &guess);

        if (guess != password) {
            printf("\nWrong answer! Try again.\n");
        }
    } while (guess != password);

    printf("\nCorrect answer! Congratulations.\n");

    return 0;
}
