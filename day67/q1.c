#include <stdio.h>

int main() {
    int m, n, i, j, k;

    printf("Enter size of first array: ");
    scanf("%d", &m);

    int nums1[m];
    printf("Enter %d sorted elements: ", m);
    for (i = 0; i < m; i++) {
        scanf("%d", &nums1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n);

    int nums2[n];
    printf("Enter %d sorted elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums2[i]);
    }

    int merged[m + n];

    i = j = k = 0;

    // Merge two arrays
    while (i < m && j < n) {
        if (nums1[i] <= nums2[j]) {
            merged[k++] = nums1[i++];
        } else {
            merged[k++] = nums2[j++];
        }
    }

    // Copy remaining elements
    while (i < m) {
        merged[k++] = nums1[i++];
    }

    while (j < n) {
        merged[k++] = nums2[j++];
    }

    // Print merged array
    for (i = 0; i < m + n; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
