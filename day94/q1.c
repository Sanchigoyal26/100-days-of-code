#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function to display student details
void display(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %.0f\n", s.name, s.roll_no, s.marks);
}

int main() {
    struct Student st;

    printf("Enter student name: ");
    scanf("%s", st.name);

    printf("Enter roll number: ");
    scanf("%d", &st.roll_no);

    printf("Enter marks: ");
    scanf("%f", &st.marks);

    // Passing structure to function
    display(st);

    return 0;
}
