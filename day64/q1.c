#include <stdio.h>

int main() {
    char s[1000];
    int last[256];
    int i, start = 0, maxLen = 0;

    printf("Enter a string: ");
    scanf("%s", s);   // reads string without spaces

    // Initialize last occurrence array with -1
    for (i = 0; i < 256; i++) {
        last[i] = -1;
    }

    for (i = 0; s[i] != '\0'; i++) {
        unsigned char ch = s[i];

        // If character seen in current window, move start
        if (last[ch] >= start) {
            start = last[ch] + 1;
        }

        // Update last seen index
        last[ch] = i;

        // Update max length of current window
        int currLen = i - start + 1;
        if (currLen > maxLen) {
            maxLen = currLen;
        }
    }

    printf("%d\n", maxLen);

    return 0;
}
