#include <stdio.h>

int main()
{
    // Variable definitions
    int number, odd_or_even;
    
    
    // Ask for a integer
    printf("Enter an integer: ");
    scanf("%d", &number);
    
    
    // Calculate the rest of the division
    odd_or_even = number % 2;
    
    
    // Check if the number is odd or even
    if (odd_or_even != 0){
        printf("\nThe number %d is odd\n", number);
    } 
    else{
        printf("\nThe number %d is even\n", number);
    }

    return 0;
}