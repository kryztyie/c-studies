//   Program: Sum from 1 to N
//   Description:
//   Reads an integer N and prints the sum of 
//   all integers from 1 to N.
//

#include <stdio.h>

int main()
{
  int number, i, sum=0;
  
    // Prompt the user to enter a value for N
    printf("Up to what number do you want to add?\n");
    scanf("%d", &number);
    
    for(i = 1; i <= number; i++){
        // Accumulate the total from 1 to N
        sum = sum + i;
    }
     printf("The sum from 1 to %d is: %d\n", number, sum);
    
}