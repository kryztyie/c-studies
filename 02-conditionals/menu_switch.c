#include <stdio.h>

int main()
{
   int choice;
   
   // Ask the user a choice to receive a song
   printf("Welcome!\n"
       "Type a number to receive a song:\n"
       "1 - Love song\n"
       "2 - Sad song\n"
       "3 - Surprise song\n");
   scanf("%d", &choice);
   
   // Selection of the song
   switch (choice){
       case 1:
            printf("Can't Help Falling in Love - Elvis Presley\n");
            break;
            
       case 2:
            printf("Exit Music (For A Film) - Radiohead\n");
            break;
            
       case 3:
            printf("Cbat - Hudson Mohawke\n");
            break;
            
       default:
            printf("Error, wrong number. Try again!\n");
            break;
   }
   return 0;
}