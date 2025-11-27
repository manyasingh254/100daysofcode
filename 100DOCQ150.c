// Use pointer to struct to modify and display data using -> operator.
#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    int marks;
};
int main() {
    struct Student s;
    struct Student *p = &s;
    printf("Enter name, roll, marks in one line: ");
    scanf("%s %d %d", p->name, &p->roll, &p->marks);
    printf("Modified Data: Name: %s | Roll: %d | Marks: %d", p->name, p->roll, p->marks);
    return 0;
}