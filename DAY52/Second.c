#include <stdio.h>
int findPivotIndex(int nums[], int size) {
    int totalSum = 0, leftSum = 0;
    // Calculate total sum of the array
    for (int i = 0; i < size; i++) {
        totalSum += nums[i];
    }
    // Iterate to find the pivot index
    for (int i = 0; i < size; i++) {
        int rightSum = totalSum - leftSum - nums[i];
        if (leftSum == rightSum) {
            return i;
        }
        leftSum += nums[i];
    }
    return -1;
}
int main() {
    // Example input
    int nums[] = {1, 7, 3, 6, 5, 6};
    int size = sizeof(nums) / sizeof(nums[0]);
    int pivotIndex = findPivotIndex(nums, size);
    printf("%d\n", pivotIndex);
    return 0;
}
‎day54/q104.c‎
+30
-1
Lines changed: 30 additions & 1 deletion
Original file line number	Diff line number	Diff line change
@@ -17,4 +17,33 @@ n = 4
Output 3:
-1
*/
*/
#include <stdio.h>
int findPivotInteger(int n) {
    int totalSum = n * (n + 1) / 2;
    for (int x = 1; x <= n; x++) {
        int leftSum = x * (x + 1) / 2;
        int rightSum = totalSum - (x - 1) * x / 2;
        if (leftSum == rightSum) {
            return x;
        }
    }
    return -1;
}
int main() {
    int n;
    
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    
    int pivot = findPivotInteger(n);
    printf("%d\n", pivot);
    return 0;
}