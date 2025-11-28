#include <stdio.h>

void printBinary(int n) {
    if (n > 1) {
        printBinary(n / 2);   // Recursive call
    }
    printf("%d", n % 2);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("Binary representation: ");
    if (n == 0)
        printf("0");
    else
        printBinary(n);
        
    printf("\n");
    return 0;
}
