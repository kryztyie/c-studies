#include <stdio.h>

int main()
{
    // Variable definitions
    int age;
    
    
    // Ask for an integer
    printf("Enter your age: ");
    scanf("%d", &age);
    
    
    // Check age category: child, teenager, adult, or senior
    if(age > 0 && age <= 13){
        printf("\nYou are a child\n");
    }
    else if(age > 13 && age <= 17){
        printf("\nYou are a teenager\n");
    }
    else if (age > 17 && age <= 65){
        printf("\nYou are an adult\n");
    }
    else if (age > 65 && age <= 130){
        printf("\nYou are an senior\n");
    }
    else{
        printf("Are you alive?\n");
    }

    return 0;
}