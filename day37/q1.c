#include <stdio.h>

int main() {
    int rows, cols, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];
    int rowSum[rows];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Calculate row sums
    for (i = 0; i < rows; i++) {
        rowSum[i] = 0;
        for (j = 0; j < cols; j++) {
            rowSum[i] += arr[i][j];
        }
    }

    // Print row sums
    printf("Row sums: ");
    for (i = 0; i < rows; i++) {
        printf("%d ", rowSum[i]);
    }

    return 0;
}
