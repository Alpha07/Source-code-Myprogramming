#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c;
for(a=1;a<=4;a++)
{
for(b=2;b<=3;b++)
{
c=a+b;
printf("a=%d b=%d c=%d\n",a,b,c);
}
}
getch();
}