#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c,d;
printf("Enter the current year");
scanf("%d",&a);
printf("Enter the year you join the company");
scanf("%d",&b);
c=a-b;
if(c>3)
{
d=2500;
printf("Bonus =RS.%d",d);
}
getch();
}