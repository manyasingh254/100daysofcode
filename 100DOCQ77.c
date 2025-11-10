// Check if the elements on the diagonal of a matrix are distinct
#include <stdio.h>

int main() {
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int a[n][n];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    int distinct = 1;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i][i] == a[j][j])
                distinct = 0;

    printf(distinct ? "True" : "False");
    return 0;
}