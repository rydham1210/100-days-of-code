#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= 2*n; i += 2) {   // Loop through first n odd numbers
        sum += i;
    }

    printf("Sum of first %d odd numbers is: %d\n", n, sum);
    return 0;
}