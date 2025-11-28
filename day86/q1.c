#include <stdio.h>
#include <string.h>

enum Operation { ADD, SUBTRACT, MULTIPLY };

int main() {
    char op[20];
    enum Operation choice;
    int a, b, result;

    printf("Enter operation (ADD / SUBTRACT / MULTIPLY): ");
    scanf("%s", op);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Convert string to enum choice
    if (strcmp(op, "ADD") == 0)
        choice = ADD;
    else if (strcmp(op, "SUBTRACT") == 0)
        choice = SUBTRACT;
    else if (strcmp(op, "MULTIPLY") == 0)
        choice = MULTIPLY;
    else {
        printf("Invalid operation!\n");
        return 0;
    }

    // Perform operation using switch
    switch (choice) {
        case ADD:
            result = a + b;
            break;
        case SUBTRACT:
            result = a - b;
            break;
        case MULTIPLY:
            result = a * b;
            break;
    }

    printf("%d\n", result);
    return 0;
}
