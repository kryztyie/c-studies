// Program: Person Address Registration
// Description:
// This program demonstrates the use of nested structures in C.
// It collects personal information such as name and age, along with
// address details (street, number, and country), and then displays
// the entered data.

#include <stdio.h>
#include <string.h>

#define STRING_SIZE 100

// Structure to store address information
struct Address {
    char street[STRING_SIZE];
    int number;
    char country[STRING_SIZE];
};

// Structure to store personal information 
struct Person {
    char name[STRING_SIZE];
    int age;
    struct Address addressData;
};

int main(void)
{
    struct Person personalData;
    
    printf("Enter full name:\n");
    fgets(personalData.name, sizeof(personalData.name), stdin);
    personalData.name[strcspn(personalData.name, "\n")] = '\0';
    
    printf("Enter age:\n");
    if (scanf("%d", &personalData.age) != 1) {
        printf("Invalid input. Program terminated.\n");
        return 1;
    }
    while (getchar() != '\n');  // Clear input buffer
    
    printf("Enter street address:\n");
    fgets(personalData.addressData.street,
           sizeof(personalData.addressData.street), stdin);
    personalData.addressData.street[
        strcspn(personalData.addressData.street, "\n")] = '\0';
    
    printf("Enter address number:\n");
    if (scanf("%d", &personalData.addressData.number) != 1) {
        printf("Invalid input. Program terminated.\n");
        return 1;
    }
    while (getchar() != '\n');  // Clear input buffer
    
    printf("Enter country:\n");
    fgets(personalData.addressData.country,
           sizeof(personalData.addressData.country), stdin);
    personalData.addressData.country[
        strcspn(personalData.addressData.country, "\n")] = '\0';
    
    printf("\nPerson Data:\n");
    printf("Name: %s\n", personalData.name);
    printf("Age: %d\n", personalData.age);
    printf("Address: %s - %d - %s\n",
           personalData.addressData.street,
           personalData.addressData.number,
           personalData.addressData.country);
    
    return 0;
}
