#include <stdio.h>

int main() {
    FILE *fp;
    char text[200];

    // Open file in append mode
    fp = fopen("data.txt", "a");

    if (fp == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }

    // Take new text from user
    printf("Enter text to append: ");
    getchar();  // to clear buffer (in case previous input used scanf)
    scanf("%[^\n]s", text);

    // Append a new line then text
    fprintf(fp, "\n%s", text);

    // Close file
    fclose(fp);

    printf("File updated successfully with appended text.\n");

    return 0;
}
