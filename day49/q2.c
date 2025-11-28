#include <stdio.h>

int main() {
    char str[200];
    int i = 0, lastStart = 0;

    printf("Enter full name: ");
    scanf("%[^\n]s", str);   // read full name including spaces

    // Print the first initial
    if (str[0] != ' ')
        printf("%c.", str[0]);

    // Find initials and track start of last word (surname)
    while (str[i] != '\0') {
        if (str[i] == ' ' && str[i+1] != '\0' && str[i+1] != ' ') {
            lastStart = i + 1;          // update potential surname start
            if (str[i+1] != '\0') {
                printf("%c.", str[i+1]); // print initial
            }
        }
        i+
