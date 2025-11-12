// Convert a lowercase string to uppercase without using built-in functions.
#include <stdio.h>
int main() {
    char str[100];
    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - ('a' - 'A');
    }
    printf("Uppercase: %s\n", str);
    return 0;
}