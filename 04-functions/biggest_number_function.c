// Program: Biggest Number Function
// Description: Asks the user for three numbers,
// checks which one is the biggest using a function,
// and returns the result to main
//

#include <stdio.h>

// Function that returns the biggest number
double biggest(double a, double b, double c){
    
    // Case 1: all numbers are equal
    if (a == b && a == c){
        printf("The three numbers are equal.\n");
        return a;
    }
    
    // Case 2: find the biggest number
     if (a >= b && a >= c){
        return a;
        
    } else if (b >= a && b >= c){
        return b;
        
    } else {
        return c;
    }
}


int main(void)
{
    double number_a, number_b, number_c;
    
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &number_a, &number_b, &number_c);

    double result = biggest(number_a, number_b, number_c);
    
    printf("The biggest number entered is: %.2f",result);
    
    return 0;
}
