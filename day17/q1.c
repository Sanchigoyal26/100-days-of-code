#include <stdio.h>
#include <math.h>

int main() {
    int n, original, remainder, digits = 0;
    double result = 0.0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    // Count number of digits
    int temp = n;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    // Calculate the sum of each digit raised to the power of digits
    temp = n;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, digits);
        temp /= 10;
    }

    // Check if Armstrong
    if ((int)result == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);

    return 0;
}
