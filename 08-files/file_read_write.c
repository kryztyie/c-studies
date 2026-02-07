/* Program: File Read and Write Example
 * Description:
 * This program demonstrates basic file handling in C.
 * It creates a text file, writes a message to it, then
 * reopens the file to read and display the stored content
 * on the screen.
 */

#include <stdio.h>

int main() {
    FILE *data;

    // Open file for writing
    data = fopen("test.txt", "w");
    fprintf(data, "Hello World!\n");
    fclose(data);

    char text[100];

    // Open file for reading
    data = fopen("test.txt", "r");
    fgets(text, 100, data);
    printf("%s", text);
    fclose(data);

    return 0;
}
