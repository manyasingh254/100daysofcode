// Remove all vowels from a string
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_vowel(char ch) {
    ch = tolower(ch);
    return (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
}

int main() {
    char str[100], result[100];
    int i, j=0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i=0; str[i]!='\0'; i++) {
        if (!is_vowel(str[i])) result[j++] = str[i];
    }
    result[j] = '\0';
    printf("String without vowels: %s", result);
    return 0;
}