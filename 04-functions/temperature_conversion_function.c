// Program: Temperature Conversion Function
// Description: Asks the user for a temperature
// in Celsius, converts it to fahrenheit using a function
// and returns the result to main
//

#include <stdio.h>

// Function prototype
double convertToFahrenheit(double celsius);

int main(void){
    double celsius;
    
    printf("Enter the temperature in Celsius: ");
    scanf("%lf",&celsius);

    double fahrenheit = convertToFahrenheit(celsius);
    
    printf("Temperature:\nCelsius: %.1f°C\nFahrenheit: %.1f°F\n",celsius, fahrenheit);
    
    return 0;
}

// Function that converts Celsius to Fahrenheit
double convertToFahrenheit(double celsius){
    return (celsius*1.8)+32;
}