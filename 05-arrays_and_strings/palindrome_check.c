// Program: Check if a String is a Palindrome
// Description:
// This program reads a string from the user and checks
// whether it is a palindrome. A palindrome reads the same
// forwards and backwards.

#include <stdio.h>

#define MAX_LENGTH 100

// Function prototypes
void remove_newline(char str[]);
int is_palindrome(char str[]);

int main(void)
{
    char text[MAX_LENGTH];

    printf("Enter a text: ");
    fgets(text, MAX_LENGTH, stdin);
    remove_newline(text);

    if (is_palindrome(text)) {
        printf("The text is a palindrome.\n");
    } else {
        printf("The text is NOT a palindrome.\n");
    }

    return 0;
}

// Function to remove the newline from fgets
void remove_newline(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }
}

/* Function to check if a string is a palindrome
   Returns 1 if true, 0 if false */
int is_palindrome(char str[]) {
    int i = 0;
    int j;

    // Find the length of the string
    for (j = 0; str[j] != '\0'; j++);
    j--; // index of the last character

    // Compare characters from start and end
    while (i < j) {
        if (str[i] != str[j]) {
            return 0; // not a palindrome
        }
        i++;
        j--;
    }

    return 1; // is a palindrome
}
