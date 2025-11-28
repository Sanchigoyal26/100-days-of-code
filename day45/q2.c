#include <stdio.h>

int main() {
    char str[200];
    int i = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);   // read full string including spaces

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {   // lowercase to uppercase
            str[i] = str[i] - 32;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {  // uppercase to lowercase
            str[i] = str[i] + 32;
        }
        i++;
    }

    printf("%s\n", str);

    return 0;
}
