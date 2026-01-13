// Program: Switch Calculator Function
// Description: Performs basic arithmetic operations
// (addition, subtraction, multiplication, division)
// based on user input.

#include <stdio.h>

// Function prototypes
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main(void)
{
    double firstNumber, secondNumber;
    char operator;
    double result;

    printf("Enter the first number: ");
    scanf("%lf", &firstNumber);

    printf(
        "\nChoose an operator:\n"
        "+ for addition\n"
        "- for subtraction\n"
        "* for multiplication\n"
        "/ for division\n"
    );
    scanf(" %c", &operator);

    printf("\nEnter the second number: ");
    scanf("%lf", &secondNumber);

    // Operation selection
    switch (operator)
    {
        case '+':
            result = add(firstNumber, secondNumber);
            printf("%.2f + %.2f = %.2f\n", firstNumber, secondNumber, result);
            break;

        case '-':
            result = subtract(firstNumber, secondNumber);
            printf("%.2f - %.2f = %.2f\n", firstNumber, secondNumber, result);
            break;

        case '*':
            result = multiply(firstNumber, secondNumber);
            printf("%.2f * %.2f = %.2f\n", firstNumber, secondNumber, result);
            break;

        case '/':
            if (secondNumber != 0)
            {
                result = divide(firstNumber, secondNumber);
                printf("%.2f / %.2f = %.2f\n", firstNumber, secondNumber, result);
            }
            else
            {
                printf("ERROR: Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("Invalid operator!\n");
    }

    return 0;
}

// Function definitions
double add(double a, double b)
{
    return a + b;
}

double subtract(double a, double b)
{
    return a - b;
}

double multiply(double a, double b)
{
    return a * b;
}

double divide(double a, double b)
{
    return a / b;
}
