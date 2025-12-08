#include <stdio.h>

int main()
{
    // Store the year
    int year;
    
    // Ask the user for a year
    printf("Enter the year that you want to know if it's a leap year: ");
    scanf("%d", &year);
    
    // Check if it's a leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        printf("\n%d is a leap year\n", year);
    }
    else{
        printf("\n%d is not a leap year\n", year);
    }
    
    return 0;
}
