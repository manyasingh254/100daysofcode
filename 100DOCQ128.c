// Read a text file and count how many vowels and consonants are in the file. 
// Ignore digits and special characters.
#include <stdio.h>
#include <ctype.h>
int is_vowel(char ch) {
    ch = tolower((unsigned char)ch);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}
int main() {
    FILE *fp;
    char filename[100], ch;
    int vowels = 0, consonants = 0;
    printf("Enter filename: ");
    scanf("%s", filename);
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("File not found.\n");
        return 1;
    }
    while ((ch = fgetc(fp)) != EOF) {
        if (isalpha((unsigned char)ch)) {
            if (is_vowel(ch))
                vowels++;
            else
                consonants++;
        }
    }
    fclose(fp);
    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
    return 0;
}