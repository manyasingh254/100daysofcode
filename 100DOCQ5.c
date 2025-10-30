//Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>
int main() 
{
    float celsius;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    printf("Fahrenheit = %.2f\n", (celsius * 9/5) + 32);
    return 0;
}