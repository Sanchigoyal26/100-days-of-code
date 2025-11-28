#include <stdio.h>

int main() {
    char str[200];
    int freq[26] = {0};  // frequency array for lowercase letters
    int i = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    // Count frequency of characters
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
        }
        i++;
    }

    // Reset index to check first repeating character in order
    i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z' && freq[str[i] - 'a'] > 1) {
            printf("%c\n", str[i]);
            return 0;
        }
        i++;
    }

    // If no repeating character found
    printf("-1\n");
    return 0;
}
