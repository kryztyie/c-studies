/*
 * Program: Simple Contact Agenda
 * Description:
 * This program demonstrates the use of structures, arrays of structures,
 * strings, and separate functions in C. It allows the user to register
 * contacts, list all contacts, search by name, and display all contacts
 * before exiting. No file handling is used.
 */

#include <stdio.h>
#include <string.h>

#define STRING_SIZE 100
#define MAX_CONTACTS 100

struct Contact {
    char name[STRING_SIZE];
    char phone[STRING_SIZE];
};

/* Function prototypes */
void addContact(struct Contact *c);
void listContacts(struct Contact contacts[], int totalContacts);
void searchContact(struct Contact contacts[], int totalContacts);

int main(void) {
    struct Contact contacts[MAX_CONTACTS];
    int totalContacts = 0;
    int option;

    do {
        printf("\n===== SIMPLE AGENDA =====\n");
        printf("1 - Add contact\n");
        printf("2 - List contacts\n");
        printf("3 - Search contact by name\n");
        printf("0 - Exit\n");
        printf("Option: ");
        scanf("%d", &option);
        getchar(); // clear buffer

        switch (option) {
            case 1:
                if (totalContacts < MAX_CONTACTS) {
                    addContact(&contacts[totalContacts]);
                    totalContacts++;
                } else {
                    printf("Contact limit reached.\n");
                }
                break;

            case 2:
                listContacts(contacts, totalContacts);
                break;

            case 3:
                searchContact(contacts, totalContacts);
                break;

            case 0:
                printf("\nExiting agenda...\n");
                listContacts(contacts, totalContacts);
                break;

            default:
                printf("Invalid option.\n");
        }

    } while (option != 0);

    return 0;
}

void addContact(struct Contact *c) {
    printf("\nAdd Contact\n");

    printf("Name: ");
    fgets(c->name, STRING_SIZE, stdin);
    c->name[strcspn(c->name, "\n")] = '\0';

    printf("Phone: ");
    fgets(c->phone, STRING_SIZE, stdin);
    c->phone[strcspn(c->phone, "\n")] = '\0';

    printf("Contact added successfully!\n");
}

void listContacts(struct Contact contacts[], int totalContacts) {
    if (totalContacts == 0) {
        printf("\nNo contacts registered.\n");
        return;
    }

    printf("\n===== CONTACT LIST =====\n");
    for (int i = 0; i < totalContacts; i++) {
        printf("%d - Name: %s | Phone: %s\n",
               i + 1, contacts[i].name, contacts[i].phone);
    }
}

void searchContact(struct Contact contacts[], int totalContacts) {
    char searchName[STRING_SIZE];
    int found = 0;

    if (totalContacts == 0) {
        printf("\nNo contacts registered.\n");
        return;
    }

    printf("\nEnter name to search: ");
    fgets(searchName, STRING_SIZE, stdin);
    searchName[strcspn(searchName, "\n")] = '\0';

    printf("\nSearch result:\n");
    for (int i = 0; i < totalContacts; i++) {
        if (strcmp(contacts[i].name, searchName) == 0) {
            printf("Name: %s | Phone: %s\n",
                   contacts[i].name, contacts[i].phone);
            found = 1;
        }
    }

    if (!found) {
        printf("Contact not found.\n");
    }
}
