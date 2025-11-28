#include <stdio.h>

int main() {
    int rows, cols, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int arr[rows][cols], trans[cols][rows];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Find transpose
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            trans[j][i] = arr[i][j];
        }
    }

    printf("Transpose of the matrix:\n");
    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            printf("%d ", trans[i]
