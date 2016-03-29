#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c,d=1,flag;
printf("MENU\n");
printf("1.Factorial\n");
printf("2.Prime \n");
printf("3.ODD/Even\n");
printf("4.Exit\n");
printf("Choose any one :");
scanf("%d",&a);
switch(a)
{
case 1:
printf("\n You choose first means factorial program .!\n");
printf("please Enter a number :");
scanf("%d",&b);
for(c=1;c<=b;c++)
{
d=d*c;
}
printf("The %d is factorial is %d",b,d);
break;
case 2:
printf("\n You choose second means prime or not program .!");
printf("\n You Enter a number for check its prime or not :");
scanf("%d",&b);
for(c=b-1;c>0;--c)
{
if(b%c==0&&c!=1)
{
printf("\n Not prime number");
break;
}
else
{
if(c==1)
printf("\nPrime Nubmer");
else
continue;
}
}
break;
case 3:
printf("\n You choose third means odd/even program .!\n");
printf("Enter a number for check even or odd:");
scanf("%d",&b);
if(b%2==0)
{
printf("\nYou enter even number");
}
else
printf("\nYou enter is odd number");
break;
case 4:
break;
default :
printf("you enter a wrong key");
}
getch();
}