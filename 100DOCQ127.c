// Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.
#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *fin, *fout;
    char ch;
    fin = fopen("input.txt", "r");
    if (fin == NULL) {
        printf("input.txt not found.\n");
        return 1;
    }
    fout = fopen("output.txt", "w");
    if (fout == NULL) {
        printf("Failed to create output.txt\n");
        fclose(fin);
        return 1;
    }
    while ((ch = fgetc(fin)) != EOF) {
        fputc(toupper((unsigned char)ch), fout);
    }
    fclose(fin);
    fclose(fout);
    printf("File converted to uppercase.\n");
    return 0;
}