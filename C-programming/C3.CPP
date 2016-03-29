#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c;
printf("Enter three number\n");
scanf("%d%d%d",&a,&b,&c);
(a>b&&a>c?printf("A is the greater"):(b>a&&b>c?printf("B is greater"):printf("C is greater")));
getch();
}