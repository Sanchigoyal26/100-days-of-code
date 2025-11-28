#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str); // read full string including spaces

    while (str[i] != '\0') {
        printf("%c\n", str[i]); // print character on new line
        i++;
    }

    return 0;
}
