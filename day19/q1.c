#include <stdio.h>

int main() {
    int a, b, hcf, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int x = a, y = b;

    // Find HCF using Euclidean algorithm (efficient)
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    hcf = a;

    // LCM formula
    lcm = (x * y) / hcf;

    printf("LCM of %d and %d is: %d\n", x, y, lcm);

    return 0;
}
