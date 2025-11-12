// Check if a string is a palindrome.
#include <stdio.h>
int main() {
    char str[100];
    int len = 0, is_palindrome = 1;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[len] != '\0' && str[len] != '\n')
        len++;
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            is_palindrome = 0;
            break;
        }
    }
    if (is_palindrome)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");
    return 0;
}