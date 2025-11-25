// Print all enum names and integer values using a loop.
#include <stdio.h>
int main() {
    enum Color { RED, YELLOW, GREEN };
    const char *names[] = { "RED", "YELLOW", "GREEN" };

    for (int i = RED; i <= GREEN; i++) {
        printf("%s=%d\n", names[i], i);
    }
    return 0;
}