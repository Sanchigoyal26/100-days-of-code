#include <stdio.h>

int main() {
    int n, i, pos, num;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n + 1];  // extra space for new element

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position and element: ");
    scanf("%d %d", &pos, &num);

    // Shift elements to the right
    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = num; // insert element at given index

    printf("Array after insertion: ");
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
