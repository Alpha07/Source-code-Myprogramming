#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a;
float b=1;
printf("enter a number");
scanf("%d",&a);
while(a>0)
{
b=b*a;
a=a-1;
}
printf("factorial value =%.3f",b);
getch();
}