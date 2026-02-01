// Program: Person Data Registration
// Description:
// This program registers the name, age, and height of three people using
// a struct array. After collecting the data, it displays the information
// entered for each person.

#include <stdio.h>
#include <string.h>

#define STRING_SIZE 100

// Struct to store personal information
struct Person {
    char name[STRING_SIZE];
    int age;
    double height;
};

int main(void) {
    struct Person personalData[3];

    for (int i = 0; i < 3; i++){
        printf("\nEnter Person %d Data\n", i+1);
        
        printf("Enter full name:\n");
        fgets(personalData[i].name, sizeof(personalData[i].name), stdin);
        personalData[i].name[strcspn(personalData[i].name, "\n")] = '\0';  // Remove the newline character

        printf("\nEnter age:\n");
        if (scanf("%d", &personalData[i].age) != 1) {
            printf("Invalid input. Program terminated.\n");
            return 1;
        }
        while (getchar() != '\n');  // Clear buffer

        printf("\nEnter height (in meters):\n");
        if (scanf("%lf", &personalData[i].height) != 1) {
            printf("Invalid input. Program terminated.\n");
            return 1;
        }
        while (getchar() != '\n');  // Clear buffer
    }

    for (int i = 0; i < 3; i++){
        printf("\nPerson %d Data:\n", i+1);
        printf("Name: %s\n", personalData[i].name);
        printf("Age: %d\n", personalData[i].age);
        printf("Height: %.2f meters\n", personalData[i].height);
    }

    return 0;
}