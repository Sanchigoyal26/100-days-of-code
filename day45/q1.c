#include <stdio.h>

int main() {
    char str[200], ch;
    int i = 0, count = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);   // read full string
    
    getchar(); // clear buffer for next input
    
    printf("Enter character to search: ");
    scanf("%c", &ch);

    while (str[i] != '\0') {
        if (str[i] == ch) {
            count++;
        }
        i++;
    }

    printf("%d\n", count);

    return 0;
}
