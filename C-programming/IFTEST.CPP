#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int qty,dis=0;
float rate,tot;
printf("Enter quantity and rate ");
scanf("%d%f",&qty,&rate);
if(qty>1000)
dis=10;
tot=(qty*rate)-(qty*rate*dis/100);
printf("\nTotal expenses =Rs %f",tot);
getch();
}