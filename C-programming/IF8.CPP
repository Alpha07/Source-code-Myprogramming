#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b;
printf("Enter number:");
scanf("%d",&a);
if(a<0)
{
b= -a;
}
else
{
b=a;
}
printf("%d",b);
getch();
}
