//Find the digit that occurs the most times in an integer number.
#include <stdio.h>
int main() {
    char num[100];
    int freq[10] = {0};
    printf("Enter an integer number: ");
    scanf("%s", num);
    for (int i = 0; num[i] != '\0'; i++) freq[num[i] - '0']++;
    int max_freq = 0, digit = 0;
    for (int i = 0; i < 10; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            digit = i;
        }
    }
    printf("Most frequent digit: %d\n", digit);
    return 0;
}