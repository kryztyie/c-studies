// Program: Reverse Array Order
// Description: Reads five integers from the user,
// stores them in an array, and then prints
// the numbers in reverse order.
//

#include <stdio.h>

int main()
{
    int a[5];
    int i;
    
   for (i = 0; i < 5; i++){
       printf("Type the %d number:\n", i+1);
       scanf("%d", &a[i]);
   }
   
   printf("\nThe numbers in reverse order\n");
   
   for (i = 4; i >= 0; i--){
       printf("%d\n",a[i]);
   }

    return 0;
}
