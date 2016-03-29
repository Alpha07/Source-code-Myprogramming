#include"areaperi.h"
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float t1,t2,t3,hpt;
float ss,r;
int ch;
float tp,ta,ta1,sp,sa,cp,ca;
clrscr();
printf("Find area and perimeter of :\n");
printf("-----------------------------\n\n");
printf("1.Triangle\n");
printf("2.Square\n");
printf("3.circle\n\n\n\n");
printf("Enter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("\nEnter side 1 of triangle");
scanf("%f",&t1);
printf("\nEnter side 2 of triangle");
scanf("%f",&t2);
printf("\nenter side 3 of triangle");
scanf("%f",&t3);
hpt=t1+t2+t3/2;
tp=TP(t1,t2,t3);
ta=TA(t1,t2,t3,hpt);
ta1=sqrt(ta);
printf("\n\n\tperimeter of triangle =%f",tp);
printf("\n\tarea of square =%f",ta1);
break;
case 2:
printf("\nEnter side of a square:");
scanf("%f",&ss);
sp=PS(ss);
sa=SA(ss);
printf("\n\n\tperimeter of square =%f",sp);
printf("\n\tarea of square =%f",sa);
break;
case 3:
printf("\n\nEnter radius of circle:");
scanf("%f",&r);
cp=CP(r);
ca=CA(r);
printf("\n\n\tperimeter of circle=%f",cp);
printf("\n\t area of circle=%f",ca);
break;
default:
printf("you enter wrong key");
}
getch();
}