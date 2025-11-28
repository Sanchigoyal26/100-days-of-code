#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // For each element, find previous greater element on the left
    for (i = 0; i < n; i++) {
        int prevGreater = -1;

        for (j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prevGreater = arr[j];
                break;     // nearest greater element found, stop search
            }
        }

        // Print values separated by comma
        if (i < n - 1)
            printf("%d, ", prevGreater);
        else
            printf("%d", prevGreater);
    }

    return 0;
}
