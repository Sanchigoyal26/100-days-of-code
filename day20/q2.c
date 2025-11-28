#include <stdio.h>

int main() {
    long long n, onesComplement = 0, place = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &n);

    while (n != 0) {
        int bit = n % 10;       // get last binary digit
        if (bit == 0)
            onesComplement += 1 * place;  // flip 0 to 1
        else
            onesComplement += 0 * place;  // flip 1 to 0

        n = n / 10;   // remove last digit
        place *= 10;  // move to next digit position
    }

    printf("1's complement = %lld\n", onesComplement);

    return 0;
}
