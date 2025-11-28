#include<stdio.h>
int main(){
    int length,breadth,perimeter,area;
    printf("ENER THE LENGTH OF RECTANGLE\n");
    scanf("%d", &length);
    printf("ENTER THE BREADTH OF RECTANGLE\n");
    scanf("%d", &breadth);
    perimeter = 2*(length+breadth);
    area = length*breadth;
    printf("the perimeter of rectangle is:%d\n" ,perimeter);
    printf("the area of rectangle is:%d\n", area);
    return 0;
}
