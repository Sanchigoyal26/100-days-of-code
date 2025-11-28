#include <stdio.h>
#include <math.h>

int main() {
    int n, firstDigit, lastDigit, digits, swappedNum;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Store original number
    int original = n;

    // Find number of digits
    digits = (int)log10(n) + 1;

    // Get first and last digits
    lastDigit = n % 10;
    firstDigit = n / pow(10, digits - 1);

    // Remove first and last digits from middle part
    int middle = n % (int)pow(10, digits - 1);
    middle = middle / 10;
