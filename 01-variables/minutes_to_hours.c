#include <stdio.h>

int main()
{
    //variable definitions
    float minutes, hours;
    
    //ask for minutes
    printf("Enter the number of minutes: ");
    scanf("%f", &minutes);
    
    //calculate hours
    hours = (minutes / 60);

    //print the result
    printf("\n%.0f minutes = %.1f hours\n", minutes, hours);
    
    return 0;
}
