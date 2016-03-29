#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c,aa;
printf("Enter the angles of triangle \n");
scanf("%d%d%d",&a,&b,&c);
aa=a+b+c;
if(aa%180==0)
{
printf("A triangle is valid");
}
else
{
printf("A triangle is invalid");
}
getch();
}