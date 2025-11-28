#include <stdio.h>

int main() {
    char str[100];
    int i = 0, length = 0;
    char temp;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);  // read string including spaces

    // Find length
    while (str[length] != '\0') {
        length++;
    }

    // Reverse string using two-pointer method
    for (i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }

    printf("%s\n", str);

    return 0;
}
