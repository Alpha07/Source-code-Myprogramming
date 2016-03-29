#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c;
printf("Enter the three number\n");
scanf("%d%d%d",&a,&b,&c);
if (a>b)
{
if (a>c)
{
printf("greater value is %d",a);
}
else
{
printf("greater value is %d",c);
}
}
else
{
if(b>c)
{
printf("the greater value is %d",b);
}
else
{
printf("the greater value is %d",c);
}
}
getch();
}