// Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
#include <stdio.h>
int main() {
    int n;
    printf("Enter n (size including missing number): ");
    scanf("%d", &n);
    int arr[n-1];
    printf("Enter %d numbers (0 to n, one missing):\n", n-1);
    for(int i=0;i<n-1;i++) scanf("%d", &arr[i]);
    int total = n*(n-1)/2;
    for(int i=0;i<n-1;i++) total -= arr[i];
    printf("Missing number: %d\n", total);
    return 0;
}