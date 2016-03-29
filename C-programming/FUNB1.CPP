#include<stdio.h>
#include<conio.h>
float fla (int x,float y)
{
float z;
z=x*y;
return z;
}
void main()
{
clrscr();
int a;
float b,c;
printf("Enter a Integer number:");
scanf("%d",&a);
printf("Enter a Float number:");
scanf("%f",&b);
c=fla(a,b);
printf("The answer is %f",c);
getch();
}