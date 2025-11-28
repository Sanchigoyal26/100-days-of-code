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

    int max1 = arr[0];
    int max2 = -99999;  // very small initial value

    // Find largest element
    for (i = 1; i < n; i++) {
        if (arr[i] > max1) {
            max1 = arr[i];
        }
    }

    // Find second largest
    for (i = 0; i < n; i++) {
        if (arr[i] > max2 && arr[i] < max1) {
