#include <stdio.h>

int main() {
    long long num;
    int digit, i, maxDigit = 0, maxCount = 0;
    int count[10] = {0};  // frequency array for digits 0-9

    printf("Enter a number: ");
    scanf("%lld", &num);

    while (num > 0) {
        digit = num % 10;  // extract last digit
        count[digit]++;    // increase count of that digit
        num /= 10;         // remove last digit
    }

    for (i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("%d\n", maxDigit);

    return 0;
}
