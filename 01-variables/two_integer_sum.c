#include <stdio.h>

int main()
{
    //variable definitions
   int number_a;
   int number_b;
   int sum=0;
   
   //ask for the first number
   printf("Type the first number (integer): ");
   scanf("%d", &number_a);
   
   //ask for the second number
   printf("\nType the second number (integer): ");
   scanf("%d", &number_b);
   
   //calculate the sum
   sum = number_a + number_b;
   
   //display the sum
   printf("\nThe sum of %d + %d is: %d\n", number_a, number_b, sum);
   
    return 0;
}
