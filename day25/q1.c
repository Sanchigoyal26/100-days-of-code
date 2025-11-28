#include <stdio.h>

int main() {
    int i, j, n = 5;

    for (i = n; i >= 1; i--) {         // outer loop controls starting number
        for (j = i; j <= n; j++) {     // print from i to 5
            printf("%d", j);
        }
        printf("\n");                  // move to next line
    }

    return 0;
}
