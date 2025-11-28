#include <stdio.h>

int main() {
    char str[300], longest[100], temp[100];
    int i = 0, j = 0, maxLen = 0, currentLen = 0;

    printf("Enter a sentence: ");
    scanf("%[^\n]s", str);   // Read full sentence including spaces

    while (1) {
        if (str[i] != ' ' && str[i] != '\0') {
            temp[j] = str[i];
            j++;
            currentLen++;
        } else {
            temp[j] = '\0'; // terminate current word

            if (currentLen > maxLen) {
                maxLen = currentLen;
                for (int k = 0; k <= currentLen; k++) {
                    longest[k] = temp[k];
                }
            }

            j = 0;
            currentLen = 0;

            if (str[i] == '\0')
                break;
