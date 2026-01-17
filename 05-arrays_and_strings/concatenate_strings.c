// Program: Concatenate Two Strings
// Description:
// This program reads two strings from the user and concatenates them.
// It creates a new string containing the first string followed by the second,
// without using the strcat function.

#include <stdio.h>

#define MAX_LENGTH 100

// Function prototypes
void remove_newline(char str[]);
void concatenate_strings(char str1[], char str2[], char result[]);

int main(void)
{
    char string1[MAX_LENGTH];
    char string2[MAX_LENGTH];
    char result[2 * MAX_LENGTH];

    printf("Enter the first string: ");
    fgets(string1, MAX_LENGTH, stdin);
    remove_newline(string1);

    printf("Enter the second string: ");
    fgets(string2, MAX_LENGTH, stdin);
    remove_newline(string2);

    concatenate_strings(string1, string2, result);

    printf("Concatenated string: %s\n", result);

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

// Function to concatenate two strings into result 
void concatenate_strings(char str1[], char str2[], char result[]) {
    int i = 0, j = 0;

    // Copy str1 into result
    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }

    // Append str2 into result
    while (str2[j] != '\0') {
        result[i] = str2[j];
        i++;
        j++;
    }

    // Terminate the result string
    result[i] = '\0';
}
