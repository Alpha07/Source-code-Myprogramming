#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c,d=1;
printf("Enter a table:");
scanf("%d",&a);
while(d<=10)
{
b=a*d;
printf("%d * %d =%d \n",a,d,b);
d++;
}
getch();
}