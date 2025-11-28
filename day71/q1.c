#include <stdio.h>

int main() {
    FILE *fp;
    char name[100];
    int age;

    // Open file in write mode
    fp = fopen("info.txt", "w");

    if (fp == NULL) {
        printf("Error creating file!\n");
        return 1;
    }

    // Take input
    printf("Enter your name: ");
    scanf("%[^\n]s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    // Write to the file
    fprintf(fp, "Name: %s\nAge: %d\n", name, age);

    // Close file
    fclose(fp);

    printf("File created successfully! Data written to info.txt\n");

    return 0;
}
