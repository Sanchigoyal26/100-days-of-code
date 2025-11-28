#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int vowels = 0, consonants = 0;

    fp = fopen("text.txt", "r");  // open file in read mode

    if (fp == NULL) {
        printf("Error: File not found!\n");
        return 1;
    }

    // Read character by character
    while ((ch = fgetc(fp)) != EOF) {
        ch = tolower(ch);   // convert to lowercase for checking
        
        if (ch >= 'a' && ch <= 'z') {  // alphabet check
            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                vowels++;
            else
                consonants++;
        }
    }

    fclose(fp);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
