//Write a program to input three numbers and find the largest among them using if–else.
#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three integers separated by space: ");
    scanf("%d %d %d", &a, &b, &c);
    int largest = a;
    if (b > largest)
        largest = b;
    if (c > largest)
        largest = c;
    printf("Largest is %d\n", largest);
    return 0;
}