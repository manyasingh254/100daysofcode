//Write a program to find the product of odd digits of a number.
#include <stdio.h>
int main() {
    int n, prod = 1, found = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0) {
        rem = n % 10;
        if (rem % 2 != 0) {
            prod *= rem;
            found = 1;
        }
        n /= 10;
    }
    if (!found)
        prod = 1;
    printf("%d\n", prod);
    return 0;
}