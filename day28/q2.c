#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];  // declare array

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);   // read array elements
    }

    printf("Array elements are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);  // print array elements
    }
return 0; }
