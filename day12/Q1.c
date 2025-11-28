#include<stdio.h>
int main()
{
    int days,fine=0;
    printf("Enter number of late days\n");
    scanf("%d",&days);
    if(days<=5)
    fine=fine+days*2;
    else if(days>5 && days<=10)
    fine=fine+(5*2)+(days-5)*4;
    else if(days>10 && days<=30)
    fine=fine+(5*2)+(5*4)+(days-10)*6;
    else
    printf("Membership Cancelled.");
    printf("fine= %d",fine);
}
