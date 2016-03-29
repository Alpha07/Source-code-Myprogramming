#include<stdio.h>
#include<conio.h>
sum()
{
int a,b,c,d,e,f;
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
f=a+b+c+d+e;
return f;
}
void main()
{
clrscr();
int x;
printf("Enter a number:\n");
x=sum();
printf("The sum is %d",x);
getch();
}