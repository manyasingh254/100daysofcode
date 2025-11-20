// Write a program to take a string input. Change it to sentence case.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char str[1001];
    int i = 0;
    printf("Enter your string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    int newWord = 1;
    while(str[i]) {
        if (isspace(str[i])) {
            newWord = 1;
        } else if (newWord && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            newWord = 0;
        } else {
            str[i] = tolower(str[i]);
        }
        i++;
    }
    printf("Output:\n%s\n", str);
    return 0;
}