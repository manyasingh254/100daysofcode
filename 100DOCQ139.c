// Show that enums store integers by printing assigned values.
#include <stdio.h>
int main() {
    enum Status { SUCCESS, FAILURE, TIMEOUT };
    const char *names[] = { "SUCCESS", "FAILURE", "TIMEOUT" };
    for (int i = SUCCESS; i <= TIMEOUT; i++) {
        printf("%s=%d", names[i], i);
        if (i < TIMEOUT) printf(", ");
    }
    return 0;
}