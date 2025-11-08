//Insert an element in an array at a given position.
#include <stdio.h>
int main() {
    int n, arr[100], pos, x;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter position and value to insert (position is 0-based): ");
    scanf("%d %d", &pos, &x);
    for (int i = n; i > pos; i--)
        arr[i] = arr[i-1];
    arr[pos] = x;
    printf("Array after insertion: ");
    for (int i = 0; i <= n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}