// Create an enum for months and print how many days each month has.
#include <stdio.h>
#include <string.h>
enum Months { JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };
int main() {
    char input[5];
    printf("Enter month abbreviation (e.g., JAN, FEB): ");
    scanf("%s", input);
    if (strcmp(input, "JAN") == 0 ||
        strcmp(input, "MAR") == 0 ||
        strcmp(input, "MAY") == 0 ||
        strcmp(input, "JUL") == 0 ||
        strcmp(input, "AUG") == 0 ||
        strcmp(input, "OCT") == 0 ||
        strcmp(input, "DEC") == 0) {
        printf("31 days\n");
    } else if (strcmp(input, "APR") == 0 ||
               strcmp(input, "JUN") == 0 ||
               strcmp(input, "SEP") == 0 ||
               strcmp(input, "NOV") == 0) {
        printf("30 days\n");
    } else if (strcmp(input, "FEB") == 0) {
        printf("28 or 29 days\n");
    } else {
        printf("Invalid month\n");
    }
    return 0;
}