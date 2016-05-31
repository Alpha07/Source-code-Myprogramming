#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b[5],c,d,e,f,x;
printf("Enter a number you want to add:");
scanf("%d",&x);
e=x;
printf("\nEnter a number:\n");
for(a=0;a<x;a++)
{
scanf("%d",&b[a]);
}
printf("\nNow we show what you enter:\n");
for(a=0;a<x;a++)
{
printf("\n%d",b[a]);
}
printf("\n=================\n");
printf("Enter a number you want to add:");
scanf("%d",&c);
printf("\nEnter a location where you want to add:");
scanf("%d",&d);
f=e;
e=e+1;
while(f>=d)
{
b[f+1]=b[f];
f=f-1;
}
b[d]=c;
printf("\nAfter addition :\n");
clrscr();
for(a=0;a<=x;a++)
{
printf("\n%d",b[a]);
}
getch();
}