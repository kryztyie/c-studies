// Program: Student Data Entry
// Description:
// This program prompts the user to enter a student's full name, age, ID, and gender.
// It stores this information in a struct and then displays the entered data.
// Input is validated for age and ID, and the program uses safe functions to avoid buffer issues.

#include <stdio.h>
#include <string.h>

#define STRING_SIZE 100

// Struct to store student information
struct Student {
    char name[STRING_SIZE];
    int age;
    int ID;
    char gender;
};

// Function prototypes
void inputStudentData(struct Student *s);
void displayStudentData(const struct Student *s);

int main(void) {
    struct Student studentData;

    inputStudentData(&studentData);
    displayStudentData(&studentData);

    return 0;
}

// Function to read student information
void inputStudentData(struct Student *s) {
    printf("Enter your full name:\n");
    fgets(s->name, sizeof(s->name), stdin);
    s->name[strcspn(s->name, "\n")] = '\0'; // Remove newline

    printf("\nEnter your age:\n");
    while (scanf("%d", &s->age) != 1 || s->age <= 0) {
        printf("Invalid age. Please enter a positive number: ");
        while (getchar() != '\n'); // Clear buffer
    }
    while (getchar() != '\n'); // Clear buffer after valid input

    printf("\nEnter your ID:\n");
    while (scanf("%d", &s->ID) != 1 || s->ID <= 0) {
        printf("Invalid ID. Please enter a positive number: ");
        while (getchar() != '\n'); // Clear buffer
    }
    while (getchar() != '\n'); // Clear buffer after valid input

    // Gender
    printf("\nEnter your gender (F or M):\n");
    while (1) {
        scanf(" %c", &s->gender);
        // Accept only F, f, M, or m
        if (s->gender == 'F' || s->gender == 'f' || s->gender == 'M' || s->gender == 'm') {
            break;
        } else {
            printf("Invalid input. Enter F or M: ");
        }
    }
    while (getchar() != '\n'); // Clear buffer
}

// Function to display student information
void displayStudentData(const struct Student *s) {
    printf("\nStudent Data:\n");
    printf("Name: %s\n", s->name);
    printf("Age: %d\n", s->age);
    printf("ID: %d\n", s->ID);

    // Use if statement without tolower/toupper
    if (s->gender == 'F' || s->gender == 'f') {
        printf("Gender: Female\n");
    } else {
        printf("Gender: Male\n");
    }
}
