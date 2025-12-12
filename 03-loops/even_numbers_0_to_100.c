//   Program: How many even numbers
//   exist between 0 and 100
//   Description:
//   Uses a for loop to walk through 100 numbers
//   counting how many of them are even.
//

#include <stdio.h>

int main()
{
    int even=0;
    
    for (int i=0; i<=100; i++){
        if (i%2==0){
            // Accumulate the total even numbers
            even++;
        }
    }
    
    printf("There are %d even numbers between 0 and 100.\n", even);
            
    return 0;
}
