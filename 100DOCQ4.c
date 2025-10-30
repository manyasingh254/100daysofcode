//Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
#define PI 3.14159
int main() 
{
    float radius;
    printf("Enter radius: ");
    scanf("%f", &radius);
    printf("Area = %.2f\n", PI * radius * radius);
    printf("Circumference = %.2f\n", 2 * PI * radius);
    return 0;
}