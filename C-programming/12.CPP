#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c,d,e;
printf("Enter total selling price of 15 items:");
scanf("%d",&a);
printf("\nEnter profit on selling 15 items:");
scanf("%d",&b);
c=a-b;
d=c/15;
printf("cost price of one items is %d",d);
getch();
}