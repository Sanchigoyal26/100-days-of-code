#include <stdio.h>

int main() {
    int n, i, j, isPrime;

    printf("Enter value of n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    for (i = 2; i <= n; i++) {  // start from 2 since 1 is not a prime number
        isPrime = 1;  // assume number is prime

        for (j = 2; j <= i / 2; j++) {  // check divisibility
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}
