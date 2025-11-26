// Create Employee structure with nested Date structure for joining date and print details.
#include <stdio.h>
struct Date {
    int day, month, year;
};
struct Employee {
    char name[50];
    int id;
    struct Date join;
};
int main() {
    struct Employee e;
    printf("Enter name: ");
    scanf("%s", e.name);
    printf("Enter ID: ");
    scanf("%d", &e.id);
    printf("Enter joining day: ");
    scanf("%d", &e.join.day);
    printf("Enter joining month: ");
    scanf("%d", &e.join.month);
    printf("Enter joining year: ");
    scanf("%d", &e.join.year);
    printf("\nName: %s | ID: %d | Joining Date: %02d/%02d/%04d\n",
           e.name, e.id, e.join.day, e.join.month, e.join.year);
    return 0;
}