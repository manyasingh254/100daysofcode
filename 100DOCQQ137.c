// Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
#include <stdio.h>
#include <string.h>
enum Role { ADMIN, USER, GUEST };
enum Role getRoleFromString(const char *input) {
    if (strcmp(input, "ADMIN") == 0) return ADMIN;
    else if (strcmp(input, "USER") == 0) return USER;
    else if (strcmp(input, "GUEST") == 0) return GUEST;
    else return -1;
}
int main() {
    char input[20];
    printf("Enter role (ADMIN, USER, GUEST): ");
    scanf("%s", input);
    enum Role r = getRoleFromString(input);
    if (r == ADMIN)
        printf("Welcome, Admin!\n");
    else if (r == USER)
        printf("Welcome, User!\n");
    else if (r == GUEST)
        printf("Welcome, Guest!\n");
    else
        printf("Invalid role\n");
    return 0;
}