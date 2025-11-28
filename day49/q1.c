#include <stdio.h>

int main() {
    char str[200];
    int i = 0;

    printf("Enter a name: ");
    scanf("%[^\n]s", str);   // read full name including spaces

    // Print the first character as initial
    if (str[0] != ' ')
        printf("%c.", str[0]);

    // Check for spaces and print next character as initial
    while (str[i] != '\0') {
        if (str[i] == ' ' && str[i+1] != '\0' && str[i+1] != ' ') {
            printf("%c.", str[i+1]);
        }
        i++;
    }

    return 0;
}
