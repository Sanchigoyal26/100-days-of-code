#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function to return topper structure
struct Student getTopper(struct Student s[], int n) {
    int i, topperIndex = 0;

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[topperIndex].marks) {
            topperIndex = i;
        }
    }

    return s[topperIndex];  // return structure
}

int main() {
    int n, i;
    
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll: ");
        scanf("%d", &s[i].roll_no);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    struct Student topper = getTopper(s, n);

    printf("\nTop Student: %s | Roll: %d | Marks: %.0f\n",
        topper.name, topper.roll_no, topper.marks);

    return 0;
}
