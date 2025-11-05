//Write a program to find the LCM of two numbers.
#include <stdio.h>
int main() {
    int a, b, lcm;
    printf("Enter two numbers separated by space: ");
    scanf("%d%d", &a, &b);
    int max = (a > b) ? a : b;
    lcm = max;
    while (1) {
        if (lcm % a == 0 && lcm % b == 0)
            break;
        lcm++;
    }
    printf("%d\n", lcm);
    return 0;
}