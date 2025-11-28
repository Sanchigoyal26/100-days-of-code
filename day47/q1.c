#include <stdio.h>

int main() {
    char str1[200], str2[200];
    int freq1[26] = {0}, freq2[26] = {0};
    int i = 0;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Count frequency of characters in first string
    while (str1[i] != '\0') {
        freq1[str1[i] - 'a']++;
        i++;
    }

    // Reset counter and count second string
    i = 0;
    while (str2[i] != '\0') {
        freq2[str2[i] - 'a']++;
        i++;
    }

    // Compare frequency arrays
    for (i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            printf("Not anagrams\n");
            return 0;
