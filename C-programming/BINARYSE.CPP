#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[6],b,c;
int *x,y;
int *r,s;
int mid;
int ee;
printf("Enter a number:\n");
for(b=0;b<=5;b++)
{
scanf("%d",&a[b]);
}
printf("\nNow we show what you enter:\n");
for(b=0;b<=5;b++)
{
printf("\n%d",a[b]);
}    /*
printf("\nEnter a number for search.:\n");
scanf("%d",&c);  */
x=a;
for(b=0;b<=5;b++)
{
if(*x>=*(a+b))
{
*x=*(a+b);
y=*x;
}
}
r=a;
for(b=0;b<=5;b++)
{
if(*r<=*(a+b))
{
*r=*(a+b);
s=*r;
}
}
printf("\nSmallest number in the list:%d",y);
printf("\nGreater number in the list:%d",s);
mid=(s+y)/2;
printf("\nThe middle number in the list :%d",mid);
printf("\nEnter a number to search:");
scanf("%d",&ee);
if(ee<mid)
{
for(b=0;b<=50;b++)
{
mid--;
if(ee==mid)
{
printf("The value is =%d",ee);
break;
}
}
}
else if(ee>mid)
{
for(b=0;b<=5;b++)
{
mid++;
if(ee==mid)
{
printf("\nThe value is =%d",mid);
break;
}
}
}
else
printf("\nWrong");
getch();
}