#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int l,b,a,p;
printf("Enter length of a rectangle :");
scanf("%d",&l);
printf("Enter breath of a rectangle :");
scanf("%d",&b);
p=2*(l+b);
a=l*b;
if(a>p)
{
printf("\n Yes! Area[%d]is greater that its perimeter[%d]",a,p);
}
else
{
printf("\n NO! Area[%d] is not greater that its perimeter [%d]",a,p);
}
getch();
}