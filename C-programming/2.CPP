#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a;      //a=kilometer distance
float b,c,d,e;//b=meter , c=feet, d= inches, e= meter
printf("Enter distance between in two cities :");
scanf("%d",&a);
b=a*1000;
c=a*3280.8399;
d=a*39370.078;
e=a*100000;
printf("\nDistance in\nMeter=%f\nFeet=%f\nInches=%f\nCentimeters=%f",b,c,d,e);
getch();
}