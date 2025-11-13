// Check if two strings are anagrams
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[100], str2[100];
    int count1[26] = {0}, count2[26] = {0}, i;
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    if (strlen(str1) != strlen(str2)) {
        printf("Not anagrams\n");
        return 0;
    }
    for (i = 0; str1[i]!='\0'; i++) {
        count1[tolower(str1[i])-'a']++;
        count2[tolower(str2[i])-'a']++;
    }
    for (i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) {
            printf("Not anagrams\n");
            return 0;
        }
    }
    printf("Anagrams\n");
    return 0;
}