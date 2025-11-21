// Store multiple student records (name, roll number, marks) into a file using fprintf(). 
// Then read them using fscanf() and display each record.
#include <stdio.h>
int main() {
    FILE *fp;
    char name[100];
    int roll, n, i;
    float marks;
    fp = fopen("students.txt", "w");
    if (fp == NULL)
        return 1;
    printf("Enter number of students: ");
    scanf("%d", &n);
    getchar();
    for (i = 0; i < n; i++) {
        printf("Name: ");
        fgets(name, sizeof(name), stdin);
        printf("Roll number: ");
        scanf("%d", &roll);
        printf("Marks: ");
        scanf("%f", &marks);
        getchar();
        fprintf(fp, "%s%d %.2f\n", name, roll, marks);
    }
    fclose(fp);
    printf("Student records written to file.\n");
    fp = fopen("students.txt", "r");
    if (fp == NULL)
        return 1;
    printf("\nStudent Records:\n");
    for (i = 0; i < n; i++) {
        fgets(name, sizeof(name), fp);
        sscanf(name, "%s %d %f", name, &roll, &marks);
        printf("Name: %s | Roll: %d | Marks: %.2f\n", name, roll, marks);
    }
    fclose(fp);
    return 0;
}