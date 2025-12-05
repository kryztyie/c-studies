#include <stdio.h>

int main()
{
    // Variable declaration
    double score;
    
    // Input score's test
    printf("Enter your test score (0-10): ");
    scanf("%lf", &score);
    
    // Check if the score is valid
    if(score > 10 || score < 0){
        printf("ERROR! WRONG SCORE\nPlease try again");
    }
     // Check if you pass in the test
    else if(score >= 7 && score <=10){
        printf("\nCongratulations!!! You have been approved.\n");
    }
    else {
        printf("\nI'm sorry. You were not approved.\n");
    }
    return 0;
}