#include <stdio.h>

int main() {
    int i, j;

    // Upper pyramid (1,3,5,7,9 stars)
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= (2*i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower inverted pyramid (7,5,3,1 stars)
    for (i = 4; i >= 1; i--) {
        for (j = 1; j <= (2*i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
