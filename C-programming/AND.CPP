#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c,d,e,sum;
printf("Enter your mark in five subject\n");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
sum=(a+b+c+d+e)/5;
if(sum>=60)
{
printf("you are passed in first divison");
}
if((sum>=50) && (sum<60))
{
printf("second divison");
}
if((sum>=40)&&(sum<50))
{
printf("third divison");
}
if(sum<40)
{
printf("fail:");
}
printf("\nthe percentage is %d",sum);
getch();
}
