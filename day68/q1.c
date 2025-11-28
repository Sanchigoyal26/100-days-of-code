#include <stdio.h>

int main() {
    int n, i, expectedSum = 0, actualSum = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Sum from 0 to n
    expectedSum = n * (n + 1) / 2;

    // Sum of given array elements
    for (i = 0; i < n; i++) {
        actualSum += nums[i];
    }

    printf("%d\n", expectedSum - actualSum);

    return 0;
}
