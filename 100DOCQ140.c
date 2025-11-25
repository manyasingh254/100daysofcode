// Define a struct with enum Gender and print person's gender.
#include <stdio.h>
#include <string.h>
enum Gender { MALE, FEMALE, OTHER };
struct Person {
    enum Gender gender;
};
int main() {
    char input[10];
    struct Person p;
    printf("Enter gender (MALE, FEMALE, OTHER): ");
    scanf("%s", input);
    if (strcmp(input, "MALE") == 0) p.gender = MALE;
    else if (strcmp(input, "FEMALE") == 0) p.gender = FEMALE;
    else if (strcmp(input, "OTHER") == 0) p.gender = OTHER;
    else {
        printf("Invalid gender\n");
        return 0;
    }
    if (p.gender == MALE)
        printf("Gender is Male\n");
    else if (p.gender == FEMALE)
        printf("Gender is Female\n");
    else
        printf("Gender is Other\n");
    return 0;
}