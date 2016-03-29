#include<stdio.h>
#include<conio.h>
prime(int a)
{
int i=2,j=a;
while(i<=j)
{
if(j%i==0)
{
j=j/i;
printf("%d\t",i);
}
else
i++;
}
}
void main()
{
clrscr();
int x,y;
printf("Enter a number:");
scanf("%d",&x);
prime(x);
getch();
}