//Write a program to check if a number is an Armstrong number.
#include <stdio.h>
int main() {
    int n, sum = 0, temp, rem, digits = 0, t;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }
    temp = n;
    while (temp != 0) {
        rem = temp % 10;
        t = 1;
        for (int i = 0; i < digits; i++)
            t *= rem;
        sum += t;
        temp /= 10;
    }
    if (sum == n)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");
    return 0;
}