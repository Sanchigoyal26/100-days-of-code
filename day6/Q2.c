#include<stdio.h>
int main(){
int x;
printf("ENTER THE NUMBER\n");
scanf("%d", &x);
if( x>=0) {
if ( x==0) {
printf(" THE NUMBER IS ZERO. \n");
} else {
printf("THE NUMBER IS POSITIVE. \n");
}
} else {
printf(" THE NUMBER IS NEGATIVE. \n");
}
return 0;
}
