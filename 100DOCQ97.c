// Print the initials of a name with a full stop after each initial, no spaces
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    printf("Enter the full name: ");
    fgets(name, sizeof(name), stdin);
    for (int i = 0; name[i] != '\0'; i++) {
        if (i == 0 || (name[i - 1] == ' ' && name[i] != ' ')) {
            printf("%c.", name[i]);
        }
    }
    printf("\n");
    return 0;
}