//Reverse an array without taking extra space.
#include <stdio.h>
void reverseArray(int arr[], int n) {
    int start = 0, end = n - 1, temp;
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    reverseArray(arr, n);
    printf("Reversed array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}