/*
 * Program: Cash Register System
 * Description:
 * This program demonstrates the use of structures, arrays of structures,
 * and functions in C. It allows the user to register products, record sales,
 * and display a final sales report when the program ends.
 */

#include <stdio.h>
#include <string.h>

#define STRING_SIZE 100
#define MAX_PRODUCTS 100

struct Product {
    char name[STRING_SIZE];
    double price;
    int sold;
};

/* Function prototypes */
void registerProduct(struct Product *p);
void recordSale(struct Product products[], int totalProducts);
void finalReport(struct Product products[], int totalProducts);

int main(void) {
    struct Product products[MAX_PRODUCTS];
    int totalProducts = 0;
    int option;

    do {
        printf("\n===== CASH REGISTER SYSTEM =====\n");
        printf("1 - Register product\n");
        printf("2 - Record sale\n");
        printf("0 - Exit and show report\n");
        printf("Option: ");
        scanf("%d", &option);
        getchar(); // clear buffer

        switch (option) {
            case 1:
                if (totalProducts < MAX_PRODUCTS) {
                    registerProduct(&products[totalProducts]);
                    totalProducts++;
                } else {
                    printf("Maximum number of products reached.\n");
                }
                break;

            case 2:
                recordSale(products, totalProducts);
                break;

            case 0:
                finalReport(products, totalProducts);
                break;

            default:
                printf("Invalid option.\n");
        }

    } while (option != 0);

    return 0;
}

void registerProduct(struct Product *p) {
    printf("\nProduct Registration\n");
    printf("Name: ");
    fgets(p->name, STRING_SIZE, stdin);
    p->name[strcspn(p->name, "\n")] = '\0';

    do {
        printf("Price: ");
        scanf("%lf", &p->price);
        getchar();
    } while (p->price <= 0);

    p->sold = 0;

    printf("Product registered successfully!\n");
}

void recordSale(struct Product products[], int totalProducts) {
    int id;

    if (totalProducts == 0) {
        printf("No products registered.\n");
        return;
    }

    printf("\nAvailable products:\n");
    for (int i = 0; i < totalProducts; i++) {
        printf("ID %d - %s ($ %.2lf)\n", i, products[i].name, products[i].price);
    }

    printf("Enter the ID of the sold product: ");
    scanf("%d", &id);

    if (id >= 0 && id < totalProducts) {
        products[id].sold++;
        printf("Sale recorded: %s\n", products[id].name);
    } else {
        printf("Invalid ID.\n");
    }
}

void finalReport(struct Product products[], int totalProducts) {
    double totalSales = 0.0;
    int highestQuantity = 0;

    printf("\n===== FINAL REPORT =====\n");

    /* First loop: calculate total sales and find highest quantity sold */
    for (int i = 0; i < totalProducts; i++) {
        totalSales += products[i].price * products[i].sold;

        if (products[i].sold > highestQuantity) {
            highestQuantity = products[i].sold;
        }
    }

    printf("Total revenue: $ %.2lf\n", totalSales);

    if (highestQuantity > 0) {
        printf("Best-selling product(s) (%d sales):\n", highestQuantity);

        /* Second loop: show all products tied for best-selling */
        for (int i = 0; i < totalProducts; i++) {
            if (products[i].sold == highestQuantity) {
                printf("- %s\n", products[i].name);
            }
        }
    } else {
        printf("No sales recorded.\n");
    }
}
