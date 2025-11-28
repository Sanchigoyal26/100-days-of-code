#include <stdio.h>

int main() {
    int rows, cols, i, j, isSymmetric = 1;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // A matrix must be square to be symmetric
    if (rows != cols) {
        printf("False\n");
        return 0;
    }

    // Check symmetry: arr[i][j] should equal arr[j][i]
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (arr[i][j] != arr[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
    }

    if (isSymmetric)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
