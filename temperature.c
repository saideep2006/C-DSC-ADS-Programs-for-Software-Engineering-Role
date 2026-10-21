#include <stdio.h>
#define CELCIUS_TO_FAHRENHEIT(celsius) ((celsius) * 9 / 5 + 32)
#define FAHRENHEIT_TO_CELCIUS(fahrenheit) ((fahrenheit - 32) * 5 / 9)
int main() {
    int choice;
    float temperature, convertedTemperature;
    printf("Temperature Conversion Menu:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice (1/2): ");
    scanf("%d", &choice);
    if (choice == 1) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temperature);
        convertedTemperature = CELCIUS_TO_FAHRENHEIT(temperature);
        printf("%.2f Celsius = %.2f Fahrenheit\n", temperature, convertedTemperature);
    } else if (choice == 2) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temperature);
        convertedTemperature = FAHRENHEIT_TO_CELCIUS(temperature);
        printf("%.2f Fahrenheit = %.2f Celsius\n", temperature, convertedTemperature);
    } else {
        printf("Invalid choice!\n");
    }
    return 0;
}
