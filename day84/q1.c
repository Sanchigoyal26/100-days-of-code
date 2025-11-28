#include <stdio.h>
#include <string.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main() {
    char input[20];
    enum Status s;

    printf("Enter status (SUCCESS / FAILURE / TIMEOUT): ");
    scanf("%s", input);

    // Convert string to enum
    if (strcmp(input, "SUCCESS") == 0)
        s = SUCCESS;
    else if (strcmp(input, "FAILURE") == 0)
        s = FAILURE;
    else if (strcmp(input, "TIMEOUT") == 0)
        s = TIMEOUT;
    else {
        printf("Invalid status!\n");
        return 0;
    }

    // Print output based on enum value
    switch (s) {
        case SUCCESS:
            printf("Operation successful\n");
            break;
        case FAILURE:
            printf("Operation failed\n");
            break;
        case TIMEOUT:
            printf("Operation timed out\n");
            break;
    }

    return 0;
}
