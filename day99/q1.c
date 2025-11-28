#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[30];
    int roll;
    int marks;
};

int main() {
    struct Student *s;

    // Allocate memory dynamically
    s = (struct Student *)malloc(sizeof(struct Student));

    if (s == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Taking input
    printf("Enter Name, Roll & Marks:\n");
    scanf("%s %d %d", s->name, &s->roll, &s->marks);

    // Displaying output
    printf("\nOutput:\n");
    printf("Name: %s | Roll: %d | Marks: %d\n", s->name, s->roll, s->marks);

    // Free allocated memory
    free(s);

    return 0;
}
