#include <stdio.h>

int main() {
    char str[300];
    int i = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);  // read full sentence including spaces

    // Convert first character
    if (str[0] >= 'a' && str[0] <= 'z') {
        str[0] = str[0] - 32;
    }

    // Convert remaining characters
    for (i = 1; str[i] != '\0'; i++) {

        // Capitalize if previous char is space
        if (str[i-1] == ' ') {
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] = str[i] - 32;
            }
        }
        // Convert to lowercase if part of a word
        else {
            if (str[i] >= 'A' && str[i] <= 'Z') {
                str[i] = str[i] + 32;
            }
        }
    }

    printf("%s\n", str);

    return 0;
}
