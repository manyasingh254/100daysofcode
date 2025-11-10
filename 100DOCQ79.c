// Perform diagonal traversal of a matrix
#include <stdio.h>

int main() {
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Diagonal traversal: ");
    for (int s = 0; s < r + c - 1; s++) {
        int row = (s < c) ? 0 : s - c + 1;
        int col = (s < c) ? s : c - 1;

        while (row < r && col >= 0) {
            printf("%d ", a[row][col]);
            row++;
            col--;
        }
    }
    return 0;
}