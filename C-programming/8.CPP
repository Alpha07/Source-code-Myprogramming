#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int num,a,b,c,d,e,d1,d2,d3,d4,d5;
printf("Enter the five digit number: ");
scanf("%d",&num);
a=num/10;
d1=num%10;
b=a/10;
d2=a%10;
c=b/10;
d3=b%10;
d=c/10;
d4=c%10;
e=d/10;
d5=d%10;
printf("\nThe reverse number is %d%d%d%d%d",d1,d2,d3,d4,d5);
getch();
}