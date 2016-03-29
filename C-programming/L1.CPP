#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i;
printf("Enter any year\n");
scanf("%d",&i);
if(i%4==0&&i%100!=0||i%400==0)
{
printf("this year is leap");
}
else
{
printf("this year is not leap");
}
getch();
}