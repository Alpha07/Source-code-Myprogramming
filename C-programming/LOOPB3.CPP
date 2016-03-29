#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
long double a,b,c=0,fact=1.0;
for(a=1.0;a<=7.0;a++)
{
fact=fact*a;
b=a/fact;
c=c+fact;
printf("the sum of given series %.9Lf\n",c);
}
getch();
}