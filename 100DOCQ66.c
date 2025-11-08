//Insert an element in a sorted array at the appropriate position.
#include <stdio.h>
int main() {
    int n, x;
    printf("Enter number of elements in sorted array: ");
    scanf("%d", &n);
    int arr[n + 1];
    printf("Enter sorted elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter element to insert: ");
    scanf("%d", &x);
    int i = n - 1;
    while (i >= 0 && arr[i] > x) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = x;
    printf("Array after insertion: ");
    for (int j = 0; j <= n; j++) printf("%d ", arr[j]);
    return 0;
}