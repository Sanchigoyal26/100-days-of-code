#include <stdio.h>

int main() {
    char str[300];
    int i = 0, start = 0, end = 0;

    printf("Enter a sentence: ");
    scanf("%[^\n]s", str);

    while (1) {
        if (str[i] == ' ' || str[i] == '\0') {
            end = i - 1;

            // reverse characters of the current word
            while (start < end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }

            if (str[i] == '\0')
                break;

            start = i + 1;  // move to next word start
        }
        i++;
    }

    printf("%s\n", str);

    return 0;
}
