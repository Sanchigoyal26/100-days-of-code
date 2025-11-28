#include <stdio.h>

int main() {
    int n, k, i, j;

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
        printf("Invalid window size\n");
        return 0;
    }

    // For each window
    for (i = 0; i <= n - k; i++) {
        int firstNeg = 0;

        for (j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                firstNeg = arr[j];
                break;
            }
        }

        printf("%d ", firstNeg);
    }

    return 0;
}
