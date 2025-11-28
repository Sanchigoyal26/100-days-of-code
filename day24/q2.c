#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {          // rows
        for (j = 1; j <= i; j++) {      // print numbers from 1 to i
            printf("%d", j);
        }
        printf("\n");                   // move to next line
    }

    return 0;
}
