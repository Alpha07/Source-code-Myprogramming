#include<stdio.h>
#include<conio.h>
avg(int *x,int *y)
{
int a,b,c,d,e;
scanf("%d%d%d",&a,&b,&c);
d=a+b+c;
*x=d/3;
*y=(d*100)/150;
}
void main()
{
clrscr();
int a,b;
printf("Enter a number :");
avg(&a,&b);
printf("The average is :%d\nThe percentage is :%d",a,b);
getch();
}
