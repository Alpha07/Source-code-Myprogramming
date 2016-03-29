#include<stdio.h>
#include<conio.h>
#define AND &&
#define OR ||
#define LOWER(x) ((x>=97)AND(x<=122))
#define UPPER(x) ((x>=65)AND(x<=90))
#define ALP(x) (((x>=65)AND(x<=90))OR((x>=97)AND(x<=122)))
#define BIG(x,y) (x>y)
void main()
{
clrscr();
int a,b,c;
char z;
printf("\nMENU\n");
printf("---------\n");
printf("1.To test a character is a small case letter or not.\n");
printf("2.To test a character is a upper case letter or not.\n");
printf("3.To test a character is an alphavet or not.\n");
printf("4.To obtain the bigger of two numbers.\n");
printf("--------------------------------------------------------\n");
printf("choose any one\n");
scanf("%d",&a);
switch(a)
{
case 1:
{
printf("Enter a alphabet:");
scanf("%s",&z);
if(LOWER(z))
{
printf("\nThis is small alphabet");
}
else
{
printf("\nThis is not small alphabet");
}
break;
}
case 2:
{
printf("\nPlease enter a alphabet:");
scanf("%s",&z);
if(UPPER(z))
{
printf("\nThis is a upper alphabet");
}
else
{
printf("\nThis is a not upper alphabet");
}
break;
}
case 3:
{
printf("\nPlease enter a alphabet:");
scanf("%s",&z);
if(ALP(z))
{
printf("\nThis is alphabet");
}
else
{
printf("\nThis is not alphabet");
}
break;
}
case 4:
{
printf("\nEnter a Two number:\n");
scanf("%d%d",&b,&c);
if(BIG(b,c))
{
printf("\nThe first number is greater");
}
else
{
printf("\nThe second number is greater");
}
break;
}
default :
printf("You enter a work key");
}
getch();
}