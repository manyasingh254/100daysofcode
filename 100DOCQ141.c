// Define a structure Student with name, roll_no, and marks, then read and print one student's data.
#include <stdio.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};
int main() {
    struct Student s;
    printf("Enter name: ");
    scanf("%49s", s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    printf("Name: %s | Roll: %d | Marks: %.0f\n", s.name, s.roll_no, s.marks);
    return 0;
}