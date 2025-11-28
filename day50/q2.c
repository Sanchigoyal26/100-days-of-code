#include <stdio.h>

int main() {
    char str[200];
    int i, j, k;

    printf("Enter a string: ");
    scanf("%s", str);

    // Print all substrings
    for (i = 0; str[i] != '\0'; i++) {
        for (j = i; str[j] != '\0'; j++) {
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            if (!(str[j+1] == '\0' && i == j)) // to avoid trailing comma at the end
                printf(",");
        }
    }

    return 0;
}
