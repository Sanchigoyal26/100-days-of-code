#include <stdio.h>

int main() {
    int n, x, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter x: ");
    scanf("%d", &x);

    int low = 0, high = n - 1;
    int ans = -1;

    // Binary search for ceil value
    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] >= x) {
            ans = mid;     // possible answer
            high = mid - 1; // try to find smaller index
        } else {
            low = mid + 1;
        }
    }

    printf("%d\n", ans);
    return 0;
}
