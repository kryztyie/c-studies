#include <stdio.h>

int main()
{
    // Store numbers entered by user
    double number_a, number_b, number_c;
    
    // Ask the user three numbers
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &number_a, &number_b, &number_c);
    
    // Check which number is the biggest
    if ( number_a > number_b && number_a > number_c){
        
        printf("%.2f is the biggest number entered\n", number_a);
    }
    else if ( number_b > number_a && number_b > number_c){
        
        printf("%.2f is the biggest number entered\n", number_b);
    } else {
        
        printf("%.2f is the biggest number entered\n", number_c);   
    }
    
    return 0;
}