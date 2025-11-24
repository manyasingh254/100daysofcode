// Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
#include <stdio.h>
#include <string.h>
enum Menu { ADD, SUBTRACT, MULTIPLY };
enum Menu getMenuFromString(const char *input) {
    if (strcmp(input, "ADD") == 0) return ADD;
    else if (strcmp(input, "SUBTRACT") == 0) return SUBTRACT;
    else if (strcmp(input, "MULTIPLY") == 0) return MULTIPLY;
    else return -1;
}
int main() {
    char input[20];
    int a, b;
    printf("Enter menu choice (ADD, SUBTRACT, MULTIPLY): ");
    scanf("%s", input);
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    enum Menu choice = getMenuFromString(input);
    switch (choice) {
        case ADD:
            printf("Result: %d\n", a + b);
            break;
        case SUBTRACT:
            printf("Result: %d\n", a - b);
            break;
        case MULTIPLY:
            printf("Result: %d\n", a * b);
            break;
        default:
            printf("Invalid menu choice\n");
    }
    return 0;
}