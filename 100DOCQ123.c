// Read a text file and count the total number of characters, words, and lines. 
// A word is defined as a sequence of non-space characters separated by spaces or newlines.
#include <stdio.h>
int main() {
    FILE *fp;
    char ch;
    int chars = 0, words = 0, lines = 0, in_word = 0;
    char filename[100];
    printf("Enter filename: ");
    scanf("%s", filename);
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("File not found.\n");
        return 1;
    }
    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == '\n')
            lines++;
        if (ch == ' ' || ch == '\n' || ch == '\t')
            in_word = 0;
        else if (in_word == 0) {
            words++;
            in_word = 1;
        }
    }
    fclose(fp);
    printf("Characters: %d\nWords: %d\nLines: %d\n", chars, words, lines);
    return 0;
}