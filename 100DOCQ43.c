//Write a program to check if a number is a strong number.
#include <stdio.h>
int main() {
    int num, temp, digit, fact, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while(num > 0) {
        digit = num % 10;
        fact = 1;
        for(i = 1; i <= digit; i++)
            fact *= i;
        sum += fact;
        num /= 10;
    }
    if(sum == temp)
        printf("Strong number");
    else
        printf("Not strong number");
    return 0;
}