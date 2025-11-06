//Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>
int main() {
    int num, n, first, last, digits, swapped;
    printf("Enter a number: ");
    scanf("%d", &num);
    n = num;
    last = num % 10;
    digits = (int)log10(num);
    first = num / pow(10, digits);
    swapped = last * pow(10, digits) + (n % (int)pow(10, digits)) / 10 * 10 + first;
    printf("Swapped number: %d", swapped);
    return 0;
}