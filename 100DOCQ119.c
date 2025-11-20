// Write a program to take an integer array as input. Only one element will be repeated. 
// Print the repeated element. Try to find the result in one single iteration.
#include <stdio.h>
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int a[n], freq[n+1];
    for(int i = 0; i <= n; i++) freq[i] = 0;
    printf("Enter %d integers:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++) {
        if(freq[a[i]] == 1) {
            printf("Repeated element: %d", a[i]);
            return 0;
        }
        freq[a[i]] = 1;
    }
    return 0;
}