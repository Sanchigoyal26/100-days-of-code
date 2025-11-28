#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int currentSum = arr[0];
    int maxSum = arr[0];

    for (i = 1; i < n; i++) {
        currentSum = (currentSum + arr[i] > arr[i]) ? currentSum + arr[i] : arr[i];
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    printf("%d\n", maxSum);
    return 0;
}
