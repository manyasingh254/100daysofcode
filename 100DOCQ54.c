//Write a program to print the following pattern:
//   *
//  ***
// *****
//*******
// *****
//  ***
//   *
#include <stdio.h>
int main() {
    int i, j, space = 3;
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= space; j++)
            printf(" ");
        space--;
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
    space = 1;
    for (i = 3; i >= 1; i--) {
        for (j = 1; j <= space; j++)
            printf(" ");
        space++;
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}