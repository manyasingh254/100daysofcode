// Use malloc() to allocate structure memory dynamically and print details.
#include <stdio.h>
#include <stdlib.h>
struct Student {
    char name[50];
    int roll;
    int marks;
};
int main() {
    struct Student *s = malloc(sizeof(struct Student));
    printf("Enter details: ");
    scanf("%s %d %d", s->name, &s->roll, &s->marks);
    printf("Name: %s | Roll: %d | Marks: %d", s->name, s->roll, s->marks);
    free(s);
    return 0;
}