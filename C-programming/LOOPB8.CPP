#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c,d;
printf("Enter a number to create a table:");
scanf("%d",&a);
for(b=1;b<=10;b++)
{
d=a*b;
printf("%d * %d =%d\n",a,b,d);
}
getch();
}