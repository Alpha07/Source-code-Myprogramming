#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int age;
char sex,ms;
printf("Enter your age,sex and marital status\n");
scanf("%d%c%c",&age,&sex,&ms);
if(ms=='M')
{
printf("Driver is insured");
}
else
{
if(sex=='m')
{
if(age>30)
{
printf("Driver is insured");
}
else
{
printf("driver is not insured");
}   }
else
{
if(age>25)
{
printf("driver is insured");
}
else
{
printf("driver is not insured");
}}}
getch();
}