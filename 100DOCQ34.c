//Write a program to check if a number is prime.
#include <stdio.h>
int main() {
    int n, i, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 2)
        flag = 1;
    else {
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                flag = 1;
                break;
            }
        }
    }
    if (flag)
        printf("Not prime\n");
    else
        printf("Prime\n");
    return 0;
}