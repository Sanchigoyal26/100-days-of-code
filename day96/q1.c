#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[30];
    int id;
    struct Date joinDate;
};

int main() {
    struct Employee emp;

    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Joining Date (dd mm yyyy): ");
    scanf("%d %d %d", &emp.joinDate.day, &emp.joinDate.month, &emp.joinDate.year);

    printf("\nOutput:\n");
    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n",
           emp.name, emp.id, emp.joinDate.day, emp.joinDate.month, emp.joinDate.year);

    return 0;
}
