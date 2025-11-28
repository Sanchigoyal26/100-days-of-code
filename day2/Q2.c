#include<stdio.h>
int main(){
float radius,area,circumference,pi;
printf("ENTER THE RADIUS OF CIRCLE\n");
scanf("%f", &radius);
pi= 3.14;
circumference = 2*pi*radius;
area= pi*radius*radius;
printf("The circumference of circle is: %f\n", circumference);
printf("The area of circle is: %f", area);
return 0;
}
