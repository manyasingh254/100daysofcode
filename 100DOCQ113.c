// Write a program to take an integer array arr and an integer k as inputs. 
// The task is to find the kth smallest element in the array. 
// Print the kth smallest element as output.
#include <stdio.h>
#include <stdlib.h>
int cmpfunc(const void * a, const void * b) {
    return (*(int*)a - *(int*)b);
}
int main() {
    int n, k, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers:\n", n);
    for(i=0;i<n;i++) scanf("%d", &arr[i]);
    printf("Enter k: ");
    scanf("%d", &k);
    qsort(arr, n, sizeof(int), cmpfunc);
    printf("kth smallest element: %d\n", arr[k-1]);
    return 0;
}