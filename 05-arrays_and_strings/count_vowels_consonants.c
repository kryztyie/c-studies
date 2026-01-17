// Program: Count Vowels and Consonants
// Description:
// This program reads a string from the user and counts
// the number of vowels and consonants in the text.

#include <stdio.h>

#define MAX_LENGTH 100

int main(void)
{
    char text[MAX_LENGTH];
    int i;
    int vowels = 0;
    int consonants = 0;

    printf("Enter a text: ");
    fgets(text, MAX_LENGTH, stdin);

    for (i = 0; text[i] != '\0'; i++) {
        char c = text[i];

        /* Check if character is a letter */
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {

            /* Check if it is a vowel */
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
