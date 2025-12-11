#include <stdio.h>

int main()
{
    //variable definitions
    float temperature_celsius;
    float temperature_fahrenheit;
    
    //ask the user for the temperature in Celsius
    printf("Type the temperature in celsius: \n");
    scanf("%f", &temperature_celsius);
    
    //calculate the temperature in Fahrenheit
    temperature_fahrenheit=(temperature_celsius*1.8)+32;
    
    //display both temperatures
    printf("Temperature\nCelsius: %.1f\nFahrenheit: %.1f", temperature_celsius, temperature_fahrenheit);
}
