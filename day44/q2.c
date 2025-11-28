#include <stdio.h>

int main() {
    char str[200];
    int i = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);   // read entire line including spaces

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            str[i] = '-';   // replace space with hyphen
        }
        i++;
    }

    printf("%s\n", str);

    return 0;
}
