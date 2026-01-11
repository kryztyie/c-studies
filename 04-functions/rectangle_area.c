// Program: Rectangle Area
// Description: Asks the user the width and length
// of a rectangle, calculates the area using a
// function and returns the result to main
//

#include <stdio.h>

// Function that returns the area of a rectangle
double area(double length, double width){
    return length * width;
}


int main(void)
{
    double length, width;
    
    printf("Enter the rectangle length: \n");
    scanf("%lf", &length);
    
    printf("Enter the rectangle width: \n");
    scanf("%lf", &width);

    double result = area(length, width);
    
    printf("Result: %.2f x %.2f = %.2f\n", length, width, result);
    
    return 0;
}
