#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c;
printf("Enter first number ?\n");
scanf("%d",&a);
printf("Enter second number ?\n");
scanf("%d",&b);
c=(a>b) ?a:b;
printf("Greater value is %d ",c);
getch();
}