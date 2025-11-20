// Write a program to take two sorted arrays of size m and n as input. 
// Merge both the arrays such that the merged array is also sorted. Print the merged array.
#include <stdio.h>
int main() {
    int m, n, i=0, j=0;
    printf("Enter size of first sorted array: ");
    scanf("%d", &m);
    int arr1[m];
    printf("Enter %d sorted integers:\n", m);
    for(i=0;i<m;i++) scanf("%d", &arr1[i]);
    printf("Enter size of second sorted array: ");
    scanf("%d", &n);
    int arr2[n];
    printf("Enter %d sorted integers:\n", n);
    for(i=0;i<n;i++) scanf("%d", &arr2[i]);    
    i=0; j=0;
    printf("Merged array: ");
    while(i<m && j<n) {
        if(arr1[i]<arr2[j]) printf("%d ", arr1[i++]);
        else printf("%d ", arr2[j++]);
    }
    while(i<m) printf("%d ", arr1[i++]);
    while(j<n) printf("%d ", arr2[j++]);
    printf("\n");
    return 0;
}