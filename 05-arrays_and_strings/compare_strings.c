// Program: Compare Two Strings
// Description:
// This program reads two strings from the user and compares them.
// It determines whether the strings are equal or different using a custom function.

#include <stdio.h>

#define MAX_LENGTH 100

int strings_are_equal(char str1[], char str2[]);
void remove_newline(char str[]);

int main(void)
{
    char string1[MAX_LENGTH];
    char string2[MAX_LENGTH];

    printf("Enter the first string: ");
    fgets(string1, MAX_LENGTH, stdin);
    remove_newline(string1);

    printf("Enter the second string: ");
    fgets(string2, MAX_LENGTH, stdin);
    remove_newline(string2);

    if (strings_are_equal(string1, string2)) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are different.\n");
    }

    return 0;
}


/* Function to compare two strings
   Returns 1 if equal, 0 if different */
int strings_are_equal(char str1[], char str2[]) {
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return 0;  // strings are different
        }
        i++;
    }

    // If both ended at the same time, they are equal
    if (str1[i] == '\0' && str2[i] == '\0') {
        return 1;
    } else {
        return 0;
    }
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


