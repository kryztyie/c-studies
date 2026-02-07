/* Program: Read File Content
 * Description:
 * This program opens a text file in read mode,
 * reads its content, and prints it on the screen.
*/

#include <stdio.h>

int main() {
    FILE *file;
    char text[200];

    file = fopen("test.txt", "r");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while (fgets(text, sizeof(text), file) != NULL) {
        printf("%s", text);
    }

    fclose(file);

    return 0;
}
