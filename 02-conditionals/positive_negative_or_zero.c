#include <stdio.h>

int main()
{
    // Store the number entered by the user
    double number;
    
    // Ask user for a number
    printf("Enter a number: ");
    scanf("%lf", &number);
    
    // Check if the number is positive
    if(number > 0){
        printf("\n%.2f is positive.\n", number);
    }
    // Check if the number is negative
    else if (number < 0){
        printf("\n%.2f is negative.\n", number);
    } 
    // The number is equal to zero
    else{
        printf("\n%.2f is equal to 0.\n", number);
    }
    
    return 0;
}