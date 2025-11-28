#include <stdio.h>

int main() {
    int n, i, j;
    int flag = 1;  // assume distinct

    printf("Enter order of square matrix (n n): ");
    scanf("%d %d", &n, &j);

    if (n != j) {
        printf("Matrix must be square\n");
        return 0;
    }

    int arr[n][n];
    int diag[n];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Store diagonal elements
    for (i = 0; i < n; i++) {
        diag[i] = arr[i][i];
    }

    // Check if all di
