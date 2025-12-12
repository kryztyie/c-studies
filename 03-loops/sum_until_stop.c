//   Program: Sum until the user stops
//   Description:
//   Uses a while loop to ask user if 
//   they want to sum. The loop ends
//   when user chooses 'No'.
//

#include <stdio.h>

int main(void)
{
   
   int option = 1;
   int sum = 0; 
   
   while (option == 1){
       printf("Do you want to add 1?\n1 - Yes\n2 - No\n");
       scanf("%d", &option);
       
       if (option == 1){
          sum++;
       }
   }
   printf("Total: %d", sum);
   
   return 0;
}