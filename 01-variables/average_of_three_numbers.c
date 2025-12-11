#include <stdio.h>

int main()
{
    //variable definitions
    float number_a;
    float number_b;
    float number_c;
    float average=0;
    
    //ask for numbers
    printf("Type the first number: ");
    scanf("%f", &number_a);
    
    printf("\nType the second number: ");
    scanf("%f", &number_b);
    
    printf("\nType the third number: ");
    scanf("%f", &number_c);
    
    //calculate the average of three numbers
    average = ( number_a + number_b + number_c) / 3;
    
    //display the average
    printf("The average of the numbers %.2f, %.2f, %.2f: %.2f\n", number_a, number_b, number_c, average);
    
    return 0;
}
