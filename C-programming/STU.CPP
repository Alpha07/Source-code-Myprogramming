#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c,d,e,sum;
printf("Enter your marks in five subject\n");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
sum=(a+b+c+d+e)/5;
if(sum>=60)
{
printf("you are passed in first divison");
}
else
{
if(sum>=50)
{
printf("you are passed in second divison");
}
else
{
if(sum>=40)
{
printf("you are passsed in third divison");
}
else
{
printf("you are fail ");
}}}
printf("\nTotal percentage is %d%",sum);
getch();
}