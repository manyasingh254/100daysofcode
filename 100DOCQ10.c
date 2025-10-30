//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>
int main() 
{
    int seconds, h, m, s;
    printf("Enter time in seconds: ");
    scanf("%d", &seconds);
    h = seconds / 3600;
    m = (seconds % 3600) / 60;
    s = seconds % 60;
    printf("%02d:%02d:%02d\n", h, m, s);
    return 0;
}