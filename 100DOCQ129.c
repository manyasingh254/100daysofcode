// A file numbers.txt contains a list of integers separated by spaces. 
// Read all integers, compute their sum and average, and print both.
#include <stdio.h>
int main() {
    FILE *fp;
    int num, sum = 0, count = 0;
    float avg;
    fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("numbers.txt not found.\n");
        return 1;
    }
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }
    fclose(fp);
    if (count == 0)
        printf("No numbers found.\n");
    else {
        avg = (float)sum / count;
        printf("Sum = %d\nAverage = %.2f\n", sum, avg);
    }
    return 0;
}