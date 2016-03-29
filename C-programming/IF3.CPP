#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a;
printf("Enter a year");
scanf("%d",&a);
if(a%4==0)
{
printf("This year is leap");
}
else
{
printf("This year is not leap");
}
getch();
}