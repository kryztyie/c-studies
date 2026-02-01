// Program: Book Data Registration
// Description:
// This program registers data for multiple books using a struct array.
// For each book, the user enters the title, author name, publication year,
// and a unique book ID. After collecting the data, the program displays
// the information entered for all books.

#include <stdio.h>
#include <string.h>

#define STRING_SIZE 100
#define TOTAL_BOOKS 3

// Struct to store book information
struct Book {
    char title[STRING_SIZE];
    char author[STRING_SIZE];
    int year;
    int ID;
};

// Function prototypes
void inputBookData(struct Book *p, int size);
void displayBookData(const struct Book *p, int size);

int main(void) {
    struct Book bookData[TOTAL_BOOKS];

    inputBookData(bookData, TOTAL_BOOKS);
    displayBookData(bookData, TOTAL_BOOKS);

    return 0;
}

// Collects data for each book
void inputBookData(struct Book *p, int size) {
    for (int i = 0; i < size; i++) {
        printf("\nEnter Book %d Data\n", i + 1);

        printf("Enter book title:\n");
        fgets(p[i].title, sizeof(p[i].title), stdin);
        p[i].title[strcspn(p[i].title, "\n")] = '\0';  // Remove newline character

        printf("Enter author name:\n");
        fgets(p[i].author, sizeof(p[i].author), stdin);
        p[i].author[strcspn(p[i].author, "\n")] = '\0';  // Remove newline character

        printf("Enter publication year:\n");
        if (scanf("%d", &p[i].year) != 1) {
            printf("Invalid input. Program terminated.\n");
            while (getchar() != '\n');  // Clear input buffer
            return;
        }
        while (getchar() != '\n');  // Clear input buffer

        printf("Enter book ID:\n");
        if (scanf("%d", &p[i].ID) != 1) {
            printf("Invalid input. Program terminated.\n");
            while (getchar() != '\n');  // Clear input buffer
            return;
        }
        while (getchar() != '\n');  // Clear input buffer
    }
}

// Displays the registered book data
void displayBookData(const struct Book *p, int size) {
    printf("\nRegistered Books Data\n");

    for (int i = 0; i < size; i++) {
        printf("\nBook %d Information:\n", i + 1);
        printf("Title: %s\n", p[i].title);
        printf("Author: %s\n", p[i].author);
        printf("Publication Year: %d\n", p[i].year);
        printf("Book ID: %d\n", p[i].ID);
    }
}
