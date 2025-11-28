#include <stdio.h>
#include <string.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p;
    char input[20];

    printf("Enter gender (MALE / FEMALE / OTHER): ");
    scanf("%s", input);

    // Convert string to enum
    if (strcmp(input, "MALE") == 0)
        p.gender = MALE;
    else if (strcmp(input, "FEMALE") == 0)
        p.gender = FEMALE;
    else if (strcmp(input, "OTHER") == 0)
        p.gender = OTHER;
    else {
        printf("Invalid Input!\n");
        return 0;
    }

    // Print gender
    switch (p.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
    }

    return 0;
}
