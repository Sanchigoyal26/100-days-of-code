#include <stdio.h>
#include <string.h>

enum signal { RED, YELLOW, GREEN };

int main() {
    char input[20];
    enum signal light;

    printf("Enter traffic light (RED / YELLOW / GREEN): ");
    scanf("%s", input);

    // Convert input to enum value
    if (strcmp(input, "RED") == 0)
        light = RED;
    else if (strcmp(input, "YELLOW") == 0)
        light = YELLOW;
    else if (strcmp(input, "GREEN") == 0)
        light = GREEN;
    else {
        printf("Invalid input!\n");
        return 0;
    }

    // Output based on enum constant
    switch (light) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
    }

    return 0;
}
