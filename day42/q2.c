#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);  // read string including spaces

    while (str[i] != '\0') {
        // If character is lowercase
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;   // convert to uppercase
        }
        i++;
    }

    printf("%s\n", str);

    return 0;
}
