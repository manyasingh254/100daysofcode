// Change the date format from dd/04/yyyy to dd-Apr-yyyy
#include <stdio.h>
#include <string.h>

int main() {
    char date[20], day[3], month[3], year[5];
    printf("Enter date in dd/04/yyyy format: ");
    scanf("%[^/]/%[^/]/%s", day, month, year);
    printf("%s-Apr-%s\n", day, year);
    return 0;
}