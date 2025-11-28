#include <stdio.h>
#include <string.h>

struct Student {
    char name[30];
    int roll;
    int marks;
};

int main() {
    struct Student s1, s2;

    // Taking first student details
    printf("Enter Student1 Name, Roll & Marks:\n");
    scanf("%s %d %d", s1.name, &s1.roll, &s1.marks);

    // Taking second student details
    printf("Enter Student2 Name, Roll & Marks:\n");
    scanf("%s %d %d", s2.name, &s2.roll, &s2.marks);

    // Compare
    if(strcmp(s1.name, s2.name) == 0 &&
       s1.roll == s2.roll &&
       s1.marks == s2.marks) 
    {
        printf("Same\n");
    } 
    else 
    {
        printf("Different\n");
    }

    return 0;
}
