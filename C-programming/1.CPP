#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a;
float b,c,d;
printf("Enter your salary: ");
scanf("%d",&a);
b=a*0.4;
c=a*0.2;
d=a-b-c;
printf("%f",b);
getch();
}