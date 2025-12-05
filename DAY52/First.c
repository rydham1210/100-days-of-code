#include <stdio.h>

int findFirst(int nums[], int size, int target) {
    int left = 0, right = size - 1, result = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            result = mid;
            right = mid - 1; // search left half
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return result;
}
int findLast(int nums[], int size, int target) {
    int left = 0, right = size - 1, result = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            result = mid;
            left = mid + 1; // search right half
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return result;
}

int main() {
    int nums[] = {1, 2, 2, 2, 3, 4, 5};
    int size = sizeof(nums) / sizeof(nums[0]);
    int target;

    printf("Enter target value: ");
    scanf("%d", &target);

    int first = findFirst(nums, size, target);
    int last = findLast(nums, size, target);

    if (first == -1 || last == -1)
        printf("-1 -1\n");
    else
        printf("First Occurrence Index: %d\nLast Occurrence Index: %d\n", first, last);

    return 0;
}