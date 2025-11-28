#include <stdio.h>

// Function to find factorial of a digit
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int n, temp, remainder, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (temp != 0) {
        remainder = temp % 10;          // extract last digit
        sum += factorial(remainder);    // add factorial of the digit
        temp /= 10;                     // remove last digit
    }

    if (sum == n)
        printf("%d is a Strong Number.\n", n);
    else
        printf("%d is not a Strong Number.\n", n);

    return 0;
}
