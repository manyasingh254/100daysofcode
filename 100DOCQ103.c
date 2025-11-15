// Write a Program to take an array of integers as input, calculate the pivot index of this array. 
// The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. 
// If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. 
// This also applies to the right edge of the array. 
// Print the leftmost pivot index. If no such index exists, print -1.
#include <stdio.h>
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);
    int total = 0;
    for (int i = 0; i < n; i++)
        total += nums[i];
    int leftSum = 0;
    for (int i = 0; i < n; i++) {
        if (leftSum == total - leftSum - nums[i]) {
            printf("%d\n", i);
            return 0;
        }
        leftSum += nums[i];
    }
    printf("-1\n");
    return 0;
}