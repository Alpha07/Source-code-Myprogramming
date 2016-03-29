#include<stdio.h>
#include<conio.h>
#define pi 3.14
void main()
{
clrscr();
float a,b,c,rp,ra,ca,cc;
printf("Enter the length of rectangle :");
scanf("%f",&a);
printf("\nEnter the breadth of rectangle :");
scanf("%f",&b);
printf("\nEnter the radius of circle :");
scanf("%f",&c);
rp=2*(a+b);
ra=a*b;
ca=pi*c*c;
cc=2*pi*c;
printf("\n the rectangle of perimeter is :%f",rp);
printf("\n the rectangle of area is %f",ra);
printf("\n the circle of area is %f",ca);
printf("\n the circle of circumference is %f",cc);
getch();
}