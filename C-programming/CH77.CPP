#include<stdio.h>
#include<conio.h>
#include"interest.h"
void main()
{
clrscr();
int p,r,t,a;
float si;
printf("Enter the principle:");
scanf("%d",&p);
printf("\nEnter the rate:");
scanf("%d",&r);
printf("\nEnter the time:");
scanf("%d",&t);
si=INTEREST(p,r,t);
a=AMOUNT(p,si);
printf("\n\n\n\n\n\n\n\tsimple interest=%f \n\n\tAmount=%d",si,a);
getch();
}