#include <stdio.h>

int main()
{
    //variable definitions
    float number, square, cube;
    
    //ask a number
    printf("Enter the number: ");
    scanf("%f", &number);
    
    //calculate square and cube
    square = (number * number);
    cube = (number * number * number);

    //print the results
    printf("\nThe square of %.2f = %.2f", number, square);
    printf("\nThe cube of %.2f = %.2f\n", number, cube);
    
    return 0;
}
