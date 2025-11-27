// Store employee data in a binary file using fwrite() and read using fread().
#include <stdio.h>
#include <stdlib.h>
struct Employee {
    int  id;
    char name[50];
    float salary;
};
int main() {
    FILE *fp;
    struct Employee e;
    int n, i;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    fp = fopen("employee.bin", "wb");
    if (fp == NULL) {
        printf("Cannot open file.\n");
        return 1;
    }
    for (i = 0; i < n; i++) {
        printf("\nEmployee %d details:\n", i + 1);
        printf("ID: ");
        scanf("%d", &e.id);
        printf("Name: ");
        scanf(" %49[^\n]", e.name);
        printf("Salary: ");
        scanf("%f", &e.salary);
        fwrite(&e, sizeof(struct Employee), 1, fp);
    }
    fclose(fp);
    fp = fopen("employee.bin", "rb");
    if (fp == NULL) {
        printf("Cannot open file.\n");
        return 1;
    }
    printf("\nEmployee details read from file:\n");
    while (fread(&e, sizeof(struct Employee), 1, fp) == 1) {
        printf("ID: %d  Name: %s  Salary: %.2f\n", e.id, e.name, e.salary);
    }
    fclose(fp);
    return 0;
}