/*
 * Program: Contact Management System
 * Description:
 * This program demonstrates the use of nested structures, arrays of structs,
 * and functions in C. It allows the user to add contacts containing personal
 * and address information, and displays all registered contacts upon exit.
 */

#include <stdio.h>
#include <string.h>

#define STRING_SIZE 100
#define MAX_CONTACTS 100

/* Structure to store address information */
struct Address {
    char street[STRING_SIZE];
    int number;
};

/* Structure to store contact information */
struct Contact {
    char name[STRING_SIZE];
    char telephone[STRING_SIZE];
    char email[STRING_SIZE];
    struct Address address;
};

/* Function prototypes */
void inputContact(struct Contact *c);
void displayContacts(const struct Contact contacts[], int totalContacts);

int main(void)
{
    struct Contact contacts[MAX_CONTACTS];
    int option;
    int totalContacts = 0;

    do {
        printf("\n1 - Add contact\n");
        printf("0 - Exit\n");
        printf("Choose an option: ");
        scanf("%d", &option);
        getchar();  // Clear input buffer

        switch (option) {
            case 1:
                if (totalContacts < MAX_CONTACTS) {
                    inputContact(&contacts[totalContacts]);
                    totalContacts++;
                } else {
                    printf("Contact list is full.\n");
                }
                break;

            case 0:
                printf("\nRegistered Contacts:\n");
                displayContacts(contacts, totalContacts);
                break;

            default:
                printf("Invalid option.\n");
        }

    } while (option != 0);

    return 0;
}

/* Reads data for a single contact */
void inputContact(struct Contact *c)
{
    printf("\nEnter contact name:\n");
    fgets(c->name, STRING_SIZE, stdin);
    c->name[strcspn(c->name, "\n")] = '\0';

    printf("Enter email:\n");
    fgets(c->email, STRING_SIZE, stdin);
    c->email[strcspn(c->email, "\n")] = '\0';

    printf("Enter telephone:\n");
    fgets(c->telephone, STRING_SIZE, stdin);
    c->telephone[strcspn(c->telephone, "\n")] = '\0';

    printf("Enter street address:\n");
    fgets(c->address.street, STRING_SIZE, stdin);
    c->address.street[strcspn(c->address.street, "\n")] = '\0';

    printf("Enter address number:\n");
    scanf("%d", &c->address.number);
    getchar();  // Clear input buffer
}

/* Displays all registered contacts */
void displayContacts(const struct Contact contacts[], int totalContacts)
{
    if (totalContacts == 0) {
        printf("No contacts registered.\n");
        return;
    }

    for (int i = 0; i < totalContacts; i++) {
        printf("\nContact %d\n", i + 1);
        printf("Name: %s\n", contacts[i].name);
        printf("Email: %s\n", contacts[i].email);
        printf("Telephone: %s\n", contacts[i].telephone);
        printf("Address: %s, %d\n",
               contacts[i].address.street,
               contacts[i].address.number);
    }
}
