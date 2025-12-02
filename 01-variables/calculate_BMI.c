#include <stdio.h>

int main()
{
    // Variable declarations
    double BMI, weight, height;
       
    // Input the weight value
    printf("Enter your weight (kg): ");
    scanf("%lf", &weight);
       
    // Input the height value 
    printf("\nEnter your height (m): ");
    scanf("%lf", &height);
       
    // Calculate the BMI
    BMI = weight / (height * height);
       
       
    // Print the result
    printf("\nYour BMI is: %.2f\n", BMI);
       
       
    return 0;
}
