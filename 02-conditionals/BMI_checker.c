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
    
    // Show the BMI
    printf("\nYour BMI is %.2f\n", BMI);
    
    // Check the BMI
    if (BMI < 18.5){
        printf("\nYou are underweight\n");
    }
    else if (BMI <= 24.9){
        printf("\nYour weight is normal\n");
    }
    else if (BMI <= 29.9){
        printf("\nYou are overweight\n");
    }
    else{
        printf("\nYou are in the obese range\n");
    }
    
    return 0;
}
