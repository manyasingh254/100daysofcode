// Write a function that accepts a structure as parameter and prints its members.
#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    int marks;
};
void printStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
}
int main() {
    struct Student s;
    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter roll: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%d", &s.marks);
    printStudent(s);
    return 0;
}