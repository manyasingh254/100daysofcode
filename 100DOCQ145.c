// Return a structure containing top student's details from a function.
#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    int marks;
};
struct Student getTopStudent(struct Student s[], int n) {
    struct Student top = s[0];
    for (int i = 1; i < n; i++) {
        if (s[i].marks > top.marks) {
            top = s[i];
        }
    }
    return top;
}
int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student s[n];
    for (int i = 0; i < n; i++) {
        printf("\nEnter name: ");
        scanf("%s", s[i].name);
        printf("Enter roll: ");
        scanf("%d", &s[i].roll);
        printf("Enter marks: ");
        scanf("%d", &s[i].marks);
    }
    struct Student t = getTopStudent(s, n);
    printf("\nTop Student: %s | Roll: %d | Marks: %d\n", t.name, t.roll, t.marks);
    return 0;
}