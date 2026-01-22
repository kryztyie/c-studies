// Program: Personal Data Entry
// Description:
// This program prompts the user to enter their full name, age, and height.
// It stores this information in a struct and then displays the entered data.

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
    struct Person personalData;

    printf("Enter your full name:\n");
    fgets(personalData.name, sizeof(personalData.name), stdin);
    personalData.name[strcspn(personalData.name, "\n")] = '\0';  // Remove the newline character

    printf("\nEnter your age:\n");
    if (scanf("%d", &personalData.age) != 1) {
        printf("Invalid input. Program terminated.\n");
        return 1;
    }
    while (getchar() != '\n');  // Clear buffer

    printf("\nEnter your height (in meters):\n");
    if (scanf("%lf", &personalData.height) != 1) {
        printf("Invalid input. Program terminated.\n");
        return 1;
    }

    printf("\nYour Data:\n");
    printf("Name: %s\n", personalData.name);
    printf("Age: %d\n", personalData.age);
    printf("Height: %.2f meters\n", personalData.height);

    return 0;
}
