// Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. 
// The elements in the sorted array might be repeated. 
// You need to print the first and last occurrence of the target and print the index of first and last occurrence. 
// Print -1, -1 if the target is not present.
int firstOccurrence(int nums[], int n, int target) {
    int low = 0, high = n - 1, res = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            res = mid;
            high = mid - 1;
        } else if (nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return res;
}
int lastOccurrence(int nums[], int n, int target) {
    int low = 0, high = n - 1, res = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            res = mid;
            low = mid + 1;
        } else if (nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return res;
}
int main() {
    int n, target;
    printf("Enter array size: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter sorted array elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);
    printf("Enter target integer: ");
    scanf("%d", &target);
    int first = firstOccurrence(nums, n, target);
    int last = lastOccurrence(nums, n, target);
    if (first != -1)
        printf("%d,%d\n", first, last);
    else
        printf("-1,-1\n");
    return 0;
}