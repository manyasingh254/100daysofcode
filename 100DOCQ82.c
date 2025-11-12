// Print each character of a string on a new line.
#include <stdio.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++)
        printf("%c\n", str[i]);
    return 0;
}