#include <stdio.h>

int main() {
    int n, m, i, j, sum = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &n, &m);

    if (n != m) {
        printf("Matrix must be square\n");
        return 0;
    }

    int arr[n][m];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Sum diagonal elements
    for (i = 0; i < n; i++) {
        sum += arr[i][i];
    }

    printf("%d\n", sum);

    return 0;
}
