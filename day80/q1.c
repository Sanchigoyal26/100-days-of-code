#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    FILE *fp;
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    // Input student details
    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll: ");
        scanf("%d", &s[i].roll);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Write to file
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        fprintf(fp, "%s %d %.2f\n", s[i].name, s[i].roll, s[i].marks);
    }
    fclose(fp);

    // Read file and display records
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\nDisplaying student records from file:\n");
    while (fscanf(fp, "%s %d %f", s[i].name, &s[i].roll, &s[i].marks) != EOF) {
        printf("Name: %s | Roll: %d | Marks: %.2f\n", s[i].name, s[i].roll, s[i].marks);
    }

    fclose(fp);

    return 0;
}
