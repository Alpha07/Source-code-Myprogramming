#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b;
printf("Enter a number\n");
scanf("%d",&a);
b=2;
while (b<=a-1)
{
if(a%b==0)
{
printf("Not a prime number");
break;
}
b++;
}
if(b==a)
{
printf("prime number");
}
getch();
}