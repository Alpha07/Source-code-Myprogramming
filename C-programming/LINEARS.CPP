#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[7],b,c;
printf("Enter a number:\n");
for(b=0;b<=6;b++)
{
scanf("%d",&a[b]);
}
printf("\nNow we show what you enter:\n");
for(b=0;b<=6;b++)
{
printf("\nValue:%d",a[b]);
printf("\nAddress:%u",&a[b]);
}
printf("\nEnter a number to search:");
scanf("%d",&c);
printf("\nNow we search ");
printf("\nLoading....");
for(b=0;b<=6;b++)
{
if(c==a[b])
{
printf("\nValue =%d",a[b]);
printf("\nAddress =%u",&a[b]);
break;
}
}
getch();
}
