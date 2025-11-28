#include <stdio.h>

int main() {
    char s[200], t[200];
    int freq[26] = {0};
    int i;

    printf("Enter first string: ");
    scanf("%s", s);

    printf("Enter second string: ");
    scanf("%s", t);

    // Count frequency for first string
    for (i = 0; s[i] != '\0'; i++) {
        freq[s[i] - 'a']++;
    }

    // Decrease frequency for second string
    for (i = 0; t[i] != '\0'; i++) {
        freq[t[i] - 'a']--;
    }

    // Check all frequencies
    for (i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}
