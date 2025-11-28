#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100], ch;

    printf("Enter filename: ");
    scanf("%s", filename);

    // Attempt to open the file in read mode
    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: File does not exist!\n");
        return 1;
    }

    printf("File opened successfully.\n");
    printf("File content:\n");

    // Read and print file content
    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}
