#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {         // number of rows
        for (j = 1; j <= i; j++) {     // print '*' equal to row number
            printf("*");
        }
        printf("\n");                  // move to next line
    }

    return 0;
}
