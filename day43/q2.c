#include <stdio.h>

int main() {
    char str[100];
    int i = 0, length = 0, isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);   // read string including spaces

    // Find length
    while (str[length] != '\0') {
        length++;
    }

    // Check palindrome
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}
