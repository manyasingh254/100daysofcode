// Toggle case of each character in a string.
#include <stdio.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= ('a' - 'A');
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += ('a' - 'A');
    }
    printf("Toggled string: %s\n", str);
    return 0;
}