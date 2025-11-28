#include <stdio.h>

int main() {
    int i, j, k;
    int n = 5;   // number of rows

    for (i = 1; i <= n; i++) {
        // print spaces
        for (j = 1; j < i; j++) {
            printf(" ");
        }
