//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>
int main() {
    int n, bin = 0, p = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0) {
        bin += (n % 2) * p;
        n = n / 2;
        p *= 10;
    }
    printf("%d\n", bin);
    return 0;
}