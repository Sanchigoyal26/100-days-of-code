#include <stdio.h>
#include <string.h>

int main() {
    char str1[200], str2[200], concat[400];
    int i, len1, len2;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    // If lengths differ, cannot be rotation
    if (len1 != len2) {
        printf("Not rotation\n");
        return 0;
    }

    // Create concatenated string str1+str1
    strcpy(concat, str1);
    strcat(concat, str1);

    // Check if str2 exists inside concat
    if (strstr(concat, str2) != NULL)
        printf("Rotation\n");
    else
        printf("Not rotation\n");

    return 0;
}
