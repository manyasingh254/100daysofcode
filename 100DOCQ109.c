// Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
#include <stdio.h>
int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter subarray size k: ");
    scanf("%d", &k);
    int curr_sum = 0;
    for (int i = 0; i < k; i++)
        curr_sum += arr[i];
    int max_sum = curr_sum;
    for (int i = k; i < n; i++) {
        curr_sum += arr[i] - arr[i - k];
        if (curr_sum > max_sum)
            max_sum = curr_sum;
    }
    printf("%d\n", max_sum);
    return 0;
}