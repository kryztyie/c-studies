#include <stdio.h>

int main()
{
    // Variable declarations
    double working_hours, working_days, monthly_salary;
    const double hourly_rate = 25.0;
       
    // Input number of days worked
    printf("How many days do you work per month?\n");
    scanf("%lf", &working_days);
       
    // Input number of hours worked per day
    printf("How many hours do you work per day?\n");
    scanf("%lf", &working_hours);
       
    // Calculate the monthly salary
    monthly_salary = (working_hours * working_days) * hourly_rate;
       
    // Print the result
    printf("Your monthly salary is: %.2f\n", monthly_salary);
       
       
    return 0;
}
