#include <stdio.h>

int findCeil(int arr[], int size, int x) {
    int left = 0, right = size - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] >= x) {
            result = mid;       
            right = mid - 1;    
        } else {
            left = mid + 1;
        }
    }

    return result;
}

int main() {
    int arr[] = {1, 2, 4, 4, 6, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    int index = findCeil(arr, size, x);

    if (index != -1)
        printf("Ceil of %d is %d at index %d\n", x, arr[index], index);
    else
        printf("-1\n");

    return 0;
}