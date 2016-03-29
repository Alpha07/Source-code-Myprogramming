#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,ba,da,hra;
printf("Enter your salary:");
scanf("%d",&a);
if(a>=1500)
{
hra=500;
da=a*0.98;
}
else
{
hra=a*10/100;
da=a*0.9;
}
printf("\nyour da is %d",da);
printf("\nyour hra is %d",hra);
getch();
}

