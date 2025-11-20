// Write a program to take two strings s and t as inputs (assume all characters are lowercase). 
// The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. 
// Print "Anagram" if they are, otherwise "Not Anagram".
#include <stdio.h>
#include <string.h>
int main() {
    char s[1001], t[1001];
    printf("Enter two strings: ");
    scanf("%s %s", s, t);
    int count[26] = {0};
    for (int i = 0; s[i]; i++) count[s[i]-'a']++;
    for (int i = 0; t[i]; i++) count[t[i]-'a']--;
    for (int i=0; i<26; i++) if(count[i]!=0) {
        printf("Not Anagram\n");
        return 0;
    }
    printf("Anagram\n");
    return 0;
}