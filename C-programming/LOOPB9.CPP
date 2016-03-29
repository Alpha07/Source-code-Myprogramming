#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c,d=4;
for(a=1;a<=10;a++)
{
if(a==1||a==2||a==4||a==7)
{
printf("\n");
}
for(b=1;b<=d;b++)
{
printf(" ");
}
d--;
printf("  %d ",a);
}
getch();
}