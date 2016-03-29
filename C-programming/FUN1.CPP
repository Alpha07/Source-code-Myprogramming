#include<stdio.h>
#include<conio.h>
fac(int x)
{
int y,z=1;
for(y=1;y<=x;y++)
{
z=z*y;
}
return z;
}
void main()
{
clrscr();
int a,b;
printf("Enter a number:");
scanf("%d",&a);
b=fac(a);
printf("\nThe factorial of %d is %d",a,b);
getch();
}
