// Program: Product Data Registration
// Description:
// This program registers data for multiple products using a struct array.
// For each product, the user enters the name, price, and quantity.
// After collecting the data, the program displays the information entered
// and allows the user to update the price and quantity for each product.

#include <stdio.h>
#include <string.h>

#define STRING_SIZE 100
#define TOTAL_PRODUCTS 3

// Struct to store product information
struct Product {
    char name[STRING_SIZE];
    double price;
    int quantity;
};

// Function prototypes
void inputProductData(struct Product *p, int size);
void displayProductData(const struct Product *p, int size);
void changeValues(struct Product *p, int size);

int main(void) {
    struct Product productData[TOTAL_PRODUCTS];

    // Collect product data
    inputProductData(productData, TOTAL_PRODUCTS);

    // Display registered products
    displayProductData(productData, TOTAL_PRODUCTS);

    // Allow updating product values
    changeValues(productData, TOTAL_PRODUCTS);

    // Display updated products
    displayProductData(productData, TOTAL_PRODUCTS);

    return 0;
}

// Function to collect data for each product
void inputProductData(struct Product *p, int size) {
    for (int i = 0; i < size; i++) {
        printf("\nEnter product %d name:\n", i + 1);
        fgets(p[i].name, sizeof(p[i].name), stdin);
        p[i].name[strcspn(p[i].name, "\n")] = '\0'; // Remove newline character

        // Input price with validation
        printf("\nEnter product price:\n");
        while (scanf("%lf", &p[i].price) != 1 || p[i].price <= 0) {
            printf("Invalid price. Enter a positive value: ");
            while (getchar() != '\n'); // Clear buffer
        }
        while (getchar() != '\n'); // Clear buffer

        // Input quantity with validation
        printf("\nEnter product quantity:\n");
        while (scanf("%d", &p[i].quantity) != 1 || p[i].quantity <= 0) {
            printf("Invalid quantity. Enter a positive value: ");
            while (getchar() != '\n'); // Clear buffer
        }
        while (getchar() != '\n'); // Clear buffer
    }
}

// Function to display all product data
void displayProductData(const struct Product *p, int size) {
    printf("\nRegistered Products Data\n");

    for (int i = 0; i < size; i++) {
        printf("\nProduct %d Information:\n", i + 1);
        printf("Name: %s\n", p[i].name);
        printf("Price: %.2f\n", p[i].price);
        printf("Quantity: %d\n", p[i].quantity);
    }
}

// Function to change price and quantity for each product
void changeValues(struct Product *p, int size) {
    printf("\nUpdate product information\n");

    for (int i = 0; i < size; i++) {
        printf("\nCurrent data for product %d:\n", i + 1);
        printf("Name: %s\n", p[i].name);
        printf("Price: %.2f\n", p[i].price);
        printf("Quantity: %d\n", p[i].quantity);

        // Update price with validation
        printf("Enter new price for '%s':\n", p[i].name);
        while (scanf("%lf", &p[i].price) != 1 || p[i].price <= 0) {
            printf("Invalid price. Enter a positive value: ");
            while (getchar() != '\n'); // Clear buffer
        }
        while (getchar() != '\n'); // Clear buffer

        // Update quantity with validation
        printf("Enter new quantity for '%s':\n", p[i].name);
        while (scanf("%d", &p[i].quantity) != 1 || p[i].quantity <= 0) {
            printf("Invalid quantity. Enter a positive value: ");
            while (getchar() != '\n'); // Clear buffer
        }
        while (getchar() != '\n'); // Clear buffer
    }
}
