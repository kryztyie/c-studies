// Program: Counting letters
// Description: Asks the user for a word
// and counts how many letters it has
//

#include <stdio.h>

int main(void) {
    char word[100];
    int cont=0;
    
    printf("Type a word\n");
    scanf("%s", word);
    
    for(int i=0; word[i]!= '\0'; i++){
        cont++;
    }

    printf("\nThe word has %d letters\n", cont);
    
    return 0;
}
