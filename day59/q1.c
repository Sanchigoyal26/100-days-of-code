#include <stdio.h>

int main() {
    int n, k, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of k: ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("-1\n");   // invalid case
        return 0;
    }

    int sum = 0, maxSum;

    // Sum of first window of size k
    for (i = 0; i < k; i++) {
        sum += arr[i];
    }
    maxSum = sum;

    // Slide the window
    for (i = k; i < n; i++) {
        sum += arr[i] - arr[i - k];   // add next, remove previous
        if (sum > maxSum) {
            maxSum = sum;
        }
    }

    printf("%d\n", maxSum);

    return 0;
}
