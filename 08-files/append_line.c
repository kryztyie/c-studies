/* Program: Append Line to a File
 * Description:
 * This program opens a text file in append mode and adds a new line to it.
 * If the file does not exist, it will be created. Each run appends one line.
*/

#include <stdio.h>

int main(void)
{
    FILE *file;
    
    file = fopen("test.txt", "a+");
    
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    
    fprintf(file, "New line\n");
    
    fclose(file);

    return 0;
}
