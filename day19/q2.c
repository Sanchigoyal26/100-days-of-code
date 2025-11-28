#include <stdio.h>

int main() {
    int n, sum = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 10;   // get last digit
        sum = sum + remainder; // add to sum
        n = n / 10;           // remove last digit
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}
