// Write a program to take an integer array arr and an integer k as inputs. 
// The task is to find the first negative integer in each subarray of size k moving from left to right. 
// If no negative exists in a window, print "0" for that window. 
// Print the results separated by spaces as output.
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, k, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int *arr = malloc(n * sizeof(int));
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter size of subarray k: ");
    scanf("%d", &k);
    int start = 0, end = 0;
    while (end < n) {
        if (end - start + 1 < k) {
            end++;
        } else if (end - start + 1 == k) {
            int found = 0;
            for (int j = start; j <= end; j++) {
                if (arr[j] < 0) {
                    printf("%d ", arr[j]);
                    found = 1;
                    break;
                }
            }
            if (!found) printf("0 ");
            start++;
            end++;
        }
    }
    printf("\n");
    free(arr);
    return 0;
}