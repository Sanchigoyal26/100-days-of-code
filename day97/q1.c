#include <stdio.h>
#include <stdlib.h>

struct Employee {
    char name[30];
    int id;
    float salary;
};

int main() {
    FILE *fp;
    struct Employee emp;

    // Writing data to binary file
    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error in opening file!");
        return 1;
    }

    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Employee Salary: ");
    scanf("%f", &emp.salary);

    fwrite(&emp, sizeof(emp), 1, fp);
    fclose(fp);

    printf("\nEmployee details entered and stored in file.\n");

    // Reading data from binary file
    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error in opening file!");
        return 1;
    }

    fread(&emp, sizeof(emp), 1, fp);
    fclose(fp);

    printf("\nDisplaying Data Read From File:\n");
    printf("Name: %s | ID: %d | Salary: %.2f\n", emp.name, emp.id, emp.salary);

    return 0;
}
