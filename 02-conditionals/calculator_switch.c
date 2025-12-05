#include <stdio.h>

int main()
{
    // Store the numbers entered by the user
    double number_a, number_b;
    
    // Store the operator choice (+, -, /, x)
    char choice;
    
    // Ask user for numbers and operator
    printf("Enter the first number: ");
    scanf("%lf", &number_a);
    
    printf("\nEnter the operator choice:\n+ for addition\n- for subtraction\n/ for division\n* for multiplication: ");
    scanf(" %c", &choice);
    
    printf("\nEnter the second number: ");
    scanf("%lf", &number_b);
    
    // Selection of the operation
    switch (choice){
        case '+' :
            printf("%.2f + %.2f = %.2f\n", number_a, number_b, (number_a + number_b));
            break;
            
        case '-' :
            printf("%.2f - %.2f = %.2f\n", number_a, number_b, (number_a - number_b));
            break;
            
        case '/' :
            if(number_b != 0){
            printf("%.2f / %.2f = %.2f\n", number_a, number_b, (number_a / number_b));
            }else{
               printf("ERROR: Division by zero!\n");
            }
            break;
            
        case '*' :
            printf("%.2f * %.2f = %.2f\n", number_a, number_b, (number_a * number_b));
            break;
        
        default: 
        printf("\nInvalid Operator!\n");
    }
    return 0;
}