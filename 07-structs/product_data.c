// Program: Product Data Entry
// Description:
// This program reads a product's name, price, and quantity from the user,
// stores the data in a struct, and then displays the entered information.

#include <stdio.h>
#include <string.h>

#define STRING_SIZE 100

// Struct to store product information
struct Product {
    char name[STRING_SIZE];
    double price;
    int quantity;
};

// Function prototypes
void inputProductData(struct Product *p);
void displayProductData(const struct Product *p);

int main(void) {
    struct Product productData;

    inputProductData(&productData);
    displayProductData(&productData);

    return 0;
}

// Reads product data from the user
void inputProductData(struct Product *p) {
    printf("Enter product name:\n");
    fgets(p->name, sizeof(p->name), stdin);
    p->name[strcspn(p->name, "\n")] = '\0';

    printf("\nEnter product price:\n");
    while (scanf("%lf", &p->price) != 1 || p->price <= 0) {
        printf("Invalid price. Enter a positive value: ");
        while (getchar() != '\n');
    }
    while (getchar() != '\n');

    printf("\nEnter product quantity:\n");
    while (scanf("%d", &p->quantity) != 1 || p->quantity <= 0) {
        printf("Invalid quantity. Enter a positive value: ");
        while (getchar() != '\n');
    }
    while (getchar() != '\n');
}

// Displays product data
void displayProductData(const struct Product *p) {
    printf("\nProduct Data:\n");
    printf("Name: %s\n", p->name);
    printf("Price: $%.2f\n", p->price);
    printf("Quantity: %d\n", p->quantity);
}
