// Program: Reverse a String
// Description:
// This program reads a string from the user and reverses it.
// The reversed string is then displayed.

#include <stdio.h>

#define MAX_LENGTH 100

int main(void)
{
    char text[MAX_LENGTH];
    int i, j;
    char temp;

    printf("Enter a text: ");
    fgets(text, MAX_LENGTH, stdin);

    // Find the length of the string, excluding the newline 
    for (i = 0; text[i] != '\0'; i++);
    int length = i;

    if (length > 0 && text[length - 1] == '\n') {
        text[length - 1] = '\0';
        length--;
    }

    // Reverse the string 
    i = 0;
    j = length - 1;
    while (i < j) {
        temp = text[i];
        text[i] = text[j];
        text[j] = temp;
        i++;
        j--;
    }

    printf("Reversed text: %s\n", text);

    return 0;
}
