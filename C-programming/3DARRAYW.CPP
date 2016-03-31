#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[4][3][2];
int b,c,d,e,f,g;
for(b=0;b<=4;b++)
{
for(c=0;c<=2;c++)
{
for(d=0;d<=1;d++)
{
printf("\n%d.%d.%d:-Enter a number:",b,c,d);
scanf("\n%d",&a[b][c][d]);
}
}
}
printf("\n------------------------------");
for(e=0;e<=4;e++)
{
for(f=0;f<=2;f++)
{
for(g=0;g<=1;g++)
{
printf("\nYou Enter :%d",a[e][f][g]);
}
}
}
getch();
}