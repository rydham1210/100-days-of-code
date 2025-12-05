#include <stdio.h>

int maxSumSubarray(int arr[], int n, int k) {
    if (k > n) return -1;

    int maxSum = 0;

    // Compute sum of first window
    for (int i = 0; i < k; i++) {
        maxSum += arr[i];
    }

    int windowSum = maxSum;

    // Slide the window across the array
    for (int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];
        if (windowSum > maxSum) {
            maxSum = windowSum;
        }
    }

    return maxSum;
}

int main() {
    // Sample input
    int arr[] = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    int k = 4;
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = maxSumSubarray(arr, n, k);
    printf("%d\n", result);

    return 0;
}