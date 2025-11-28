#include <stdio.h>

int main() {
    char str[200], result[200];
    int i = 0, j = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);  // read entire string including spaces

    while (str[i] != '\0') {
        char ch = str[i];

        // check if not a vowel
        if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
              ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
            result[j] = ch;
            j++;
        }

        i++;
    }

    result[j] = '\0';  // terminate string

    printf("%s\n", result);

    return 0;
}
