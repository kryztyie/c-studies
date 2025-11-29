#include <stdio.h>

int main()
{
    //variable definitions
    int current_year;
    int birth_year;
    int age;
    
    //ask the current year
    printf("Type the current year:\n");
    scanf("%d", &current_year);
    
    //ask the birth year
    printf("Type your birth year:\n");
    scanf("%d", &birth_year);
    
    //calculate the age
    age=(current_year - birth_year);
    
    //display the age
    printf("Your age: %d\n", age);
}