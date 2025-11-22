// Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
#include <stdio.h>
#include <string.h>
typedef enum {
    SUCCESS,
    FAILURE,
    TIMEOUT
} Status;
Status getStatusFromString(const char *input) {
    if (strcmp(input, "SUCCESS") == 0) return SUCCESS;
    else if (strcmp(input, "FAILURE") == 0) return FAILURE;
    else if (strcmp(input, "TIMEOUT") == 0) return TIMEOUT;
    else return -1;
}
int main() {
    char input[20];
    printf("Enter status (SUCCESS, FAILURE, TIMEOUT): ");
    scanf("%s", input);
    Status s = getStatusFromString(input);
    switch (s) {
        case SUCCESS:
            printf("Operation successful\n");
            break;
        case FAILURE:
            printf("Operation failed\n");
            break;
        case TIMEOUT:
            printf("Operation timed out\n");
            break;
        default:
            printf("Invalid status\n");
    }
    return 0;
}