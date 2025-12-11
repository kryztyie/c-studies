#include <stdio.h>

int main()
{
    //store number entered by user
    int guess;
    
    //ask the user the password
    printf("Guess the 3-digit password\n");
    scanf("%d", &guess);
    
    //check the numbers if they are equal to password "187"
    if(guess == 187) {
        printf("Wow! You guessed the correct password!\n");
    } else {
        printf("Sorry, you're wrong.\nTry again.\n");
    }
    
    return 0;
}