#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[5];
int b,c,d,e=5;
int x=e;
printf("Enter a five number:\n");
for(b=1;b<=5;b++)
{
scanf("%d",&a[b]);
}
printf("\n=============================\n");
printf("\nNow we show what you enter:\n");
for(b=1;b<=5;b++)
{
printf("%d\n",a[b]);
}
printf("\nPlease Enter a number you want to add:");
scanf("%d",&d);
printf("\nNow please enter a position you want to add the number:");
scanf("%d",&c);
e=e+1;
while(x>=c)
{
a[x+1]=a[x];
x=x-1;
}
a[c]=d;
printf("\nThe array element after insertion:\n");
for(b=1;b<=6;b++)
{
printf("\na[%d]=%d\n",b,a[b]);
}
getch();
}