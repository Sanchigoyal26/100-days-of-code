#include <stdio.h>

int main() {
    FILE *fin, *fout;
    char ch;

    // Open input file for reading
    fin = fopen("input.txt", "r");
    if (fin == NULL) {
        printf("Error: input.txt not found!\n");
        return 1;
    }

    // Open output file for writing
    fout = fopen("output.txt", "w");
    if (fout == NULL) {
        printf("Error: Could not create output.txt\n");
        fclose(fin);
        return 1;
    }

    // Read character by character and convert
    while ((ch = fgetc(fin)) != EOF) {
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 32;   // convert to uppercase
        }
        fputc(ch, fout);
    }

    fclose(fin);
    fclose(fout);

    printf("Successfully written to output.txt\n");
    return 0;
}
