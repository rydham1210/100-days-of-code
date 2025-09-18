#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;   // Use long long for large values

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i += 2) {   // Loop through even numbers
        product *= i;
    }

    printf("Product of even numbers from 1 to %d is: %lld\n", n, product);
     return 0;
}