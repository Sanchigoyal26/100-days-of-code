#include <stdio.h>

int main() {
    int rows, cols, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Diagonal Traversal:\n");

    // Traverse diagonals starting from first row
    for (int d = 0; d < rows; d++) {
        i = d;
        j = 0;
        while (i >= 0 && j < cols) {
            printf("%d ", arr[i][j]);
            i--;
            j++;
        }
    }

    // Traverse diagonals starting from last column (excluding first element)
    for (int d = 1; d < cols; d++) {
        i = rows - 1;
        j = d;
        while (i >= 0 && j < cols) {
            printf("%d ", arr[i][j]);
            i--;
            j++;
        }
    }

    return 0;
}
