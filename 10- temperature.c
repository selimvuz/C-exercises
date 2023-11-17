#include <stdio.h>

int main()
{
    float temp;

    // Celcius to Fahrenheit
    printf("Enter the temperature in Celcius: ");
    scanf("%f", &temp);

    printf("The temperature in Fahrenheit is %.2f\n", (temp * 9 / 5) + 32);

    return 0;
}