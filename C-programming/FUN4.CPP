#include<stdio.h>
#include<conio.h>
leap(int x)
{
if(x%4==0||x%400==0)
{
printf("This is leap year");
}
else
{
printf("This is not leap year");
}

}
void main()
{
clrscr();
int a,b;
printf("Enter a Year	:");
scanf("%d",&a);
b=leap(a);
getch();
}