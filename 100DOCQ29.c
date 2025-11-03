//Write a program to calculate the factorial of a number.
#include <stdio.h>
int main() {
    int n;
    long long fact = 1;
    printf("Enter number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
        fact *= i;

    printf("%lld", fact);
    return 0;
}