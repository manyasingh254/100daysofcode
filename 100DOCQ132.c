// Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value. 
#include <stdio.h>
#include <string.h>
enum TrafficLight { RED, YELLOW, GREEN };
int main() {
    char input[10];
    printf("Enter traffic light (RED, YELLOW, GREEN): ");
    scanf("%s", input);
    enum TrafficLight light;
    if (strcmp(input, "RED") == 0)
        light = RED;
    else if (strcmp(input, "YELLOW") == 0)
        light = YELLOW;
    else if (strcmp(input, "GREEN") == 0)
        light = GREEN;
    else {
        printf("Invalid input\n");
        return 0;
    }
    if (light == RED)
        printf("Stop\n");
    else if (light == YELLOW)
        printf("Wait\n");
    else if (light == GREEN)
        printf("Go\n");
    return 0;
}