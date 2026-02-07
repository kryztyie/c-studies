/* Program: Count Lines in a File
 * Description:
 * This program opens a text file, reads it line by line,
 * and counts how many lines it contains. The total number
 * of lines is then printed on the screen.
*/

#include <stdio.h>

int main(void) {
    FILE *file;
    char buffer[200];
    int lineCount = 0;

    file = fopen("test.txt", "r");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        lineCount++;
    }

    fclose(file);

    printf("Total number of lines: %d\n", lineCount);

    return 0;
}
