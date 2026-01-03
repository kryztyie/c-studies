//   Program: Biggest Number
//   Description: Read 10 numbers
//   and print the biggest one.
//

#include <stdio.h>

int main(void)
{
    double number;
    double max;
    
    for (int i = 0; i < 10; i++){
        printf("Enter the %d° number: \n", i+1);
        scanf("%lf", &number);
        
        if (i == 0 || number > max){
            max = number;
        }
    }

    printf("\nThe biggest number entered is: %.2f\n", max);
    
    return 0;
}