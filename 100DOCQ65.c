//Search in a sorted array using binary search.
#include <stdio.h>
int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}
int main() {
    int n, target;
    printf("Enter size of sorted array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter element to search: ");
    scanf("%d", &target);
    int result = binarySearch(arr, n, target);
    if (result != -1) printf("Found at index %d\n", result);
    else printf("-1\n");
    return 0;
}