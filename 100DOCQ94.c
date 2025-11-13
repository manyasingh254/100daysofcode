// Find the longest word in a sentence
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200], word[50], longest[50];
    int i = 0, len = 0, max_len = 0, j = 0;
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = ' '; // Treat end as space

    while (sentence[i] != '\0') {
        if (sentence[i] != ' ') {
            word[j++] = sentence[i];
        } else {
            word[j] = '\0';
            len = strlen(word);
            if (len > max_len) {
                max_len = len;
                strcpy(longest, word);
            }
            j = 0;
        }
        i++;
    }
    printf("Longest word: %s\n", longest);
    return 0;
}