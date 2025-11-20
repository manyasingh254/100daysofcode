// Write a program to take a string s as input. 
// The task is to find the length of the longest substring without repeating characters. 
// Print the length as output.
#include <stdio.h>
#include <string.h>
int max(int a, int b) { return a > b ? a : b; }
int main() {
    char s[1001];
    printf("Enter string: ");
    scanf("%s", s);
    int last[256];
    for(int i=0; i<256; i++) last[i] = -1;
    int start=0, max_len=0;
    for(int i=0; s[i]; i++) {
        if(last[(unsigned char)s[i]]>=start) start = last[(unsigned char)s[i]]+1;
        last[(unsigned char)s[i]] = i;
        max_len = max(max_len, i-start+1);
    }
    printf("Length of longest substring without repeating chars: %d\n", max_len);
    return 0;
}