// Print initials of a name with surname displayed in full
#include <stdio.h>
#include <string.h>

int main() {
    char name[100], surname[50];
    int i, last_space = -1;
    printf("Enter the full name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    int len = strlen(name);
    for (i = len-1; i >= 0; i--)
        if (name[i] == ' ') { last_space = i; break; }

    for (i = 0; i < len; i++) {
        if (i==0 || (name[i-1]==' ' && name[i]!=' ')) {
            if (i > last_space) break;
            printf("%c.", name[i]);
        }
    }
    printf(" %s\n", name+last_space+1);
    return 0;
}