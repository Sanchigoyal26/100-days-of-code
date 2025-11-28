#include <stdio.h>

int main() {
    char str[100];
    int count = 0, i = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);  // read full line including spaces

    // Count characters manually
    while (str[i] != '\0') {
        count++;
        i++;
    }

    printf("%d\n", count);

    return 0;
}
