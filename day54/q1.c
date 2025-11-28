#include <stdio.h>

int main() {
    int n, x, totalSum = 0, leftSum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    // Calculate total sum from 1 to n
    totalSum = n * (n + 1) / 2;

    // Check each x from 1 to n
    for (x = 1; x <= n; x++) {
        leftSum = x * (x + 1) / 2; // sum of 1 to x

        if (leftSum == totalSum - leftSum + x) {
            printf("%d\n", x);
            return 0;
        }
    }

    printf("-1\n");
    return 0;
}
