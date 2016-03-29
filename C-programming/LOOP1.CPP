#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c,d;
for(a=1;a<=10;a++)
{
printf("Enter number of hours worked by %d employee:\n",a);
scanf("%d",&b);
if(b>40)
{
c=b-40;
d=c*12;
printf("the overtime pay of employee is %d\n",d);
}
else
{
printf("the is no overtime pay for employee\n");
}
}
getch();
}