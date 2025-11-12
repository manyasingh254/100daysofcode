// Reverse a string.
#include <stdio.h>
int main() {
    char str[100];
    int len = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[len] != '\0' && str[len] != '\n')
        len++;
    for (int i = len - 1; i >= 0; i--)
        printf("%c", str[i]);
    printf("\n");
    return 0;
}