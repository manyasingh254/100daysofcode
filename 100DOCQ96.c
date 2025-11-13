// Reverse each word in a sentence without changing the word order
#include <stdio.h>
#include <string.h>

void reverse(char *str, int l, int r) {
    while (l < r) {
        char temp = str[l];
        str[l++] = str[r];
        str[r--] = temp;
    }
}

int main() {
    char sentence[200];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    int start = 0, end = 0, len = strlen(sentence);
    for (int i = 0; i <= len; i++) {
        if (sentence[i] == ' ' || sentence[i] == '\0' || sentence[i] == '\n') {
            reverse(sentence, start, i-1);
            start = i+1;
        }
    }
    printf("Result: %s", sentence);
    return 0;
}