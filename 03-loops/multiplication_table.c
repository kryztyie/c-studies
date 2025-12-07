#include <stdio.h>

int main()
{
    // Variable declarations
    int i, number;
    
    // Ask the user which multiplication table they want
    printf("Enter the multiplication table number you want: ");
    scanf("%d", &number);
    
    // A for loop to print the multiplication table.
    for(i = 0; i <= 10; i++){
        printf("%d X %d = %d\n", number, i, number*i);
    }
    
    return 0;
}
