// Program: Sum Function
// Description: Asks the user for two numbers, 
// calculates their sum using a function,
// and returns the result to main
//

#include <stdio.h>

// Function that return the sum of two integers
int sum(int a, int b){
    return a + b;
}

int main(void)
{
    int a, b;
    
    printf("Enter the first number(integer): \n");
    scanf("%d", &a);
    
    printf("Enter the second number(integer): \n");
    scanf("%d", &b);

    int result = sum(a, b);
    
    printf("Result: %d + %d = %d\n", a, b, result);
    
    return 0;
}
