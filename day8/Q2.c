#include<stdio.h>
int main(){
int x,y,z;
printf("ENTER THE NUMBERS.\n");
scanf("%d %d %d", &x ,&y, &z);
if(x>=y && x>=z) {
printf("%d is the largest number.\n", x);
}
else if (y>=x && y>=z) {
printf("%d is the largest number.\n", y);
}
else {
printf("%d is the largest number.\n", z);
}
return 0;
}
