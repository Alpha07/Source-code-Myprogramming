#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c;
printf("Enter the today date\n");
scanf("%d",&a);
printf("Enter the date when you issue the book\n");
scanf("%d",&b);
c=a-b;
printf("you have %d day have this book\n",c);
if(c<5)
{
printf("your fine is 50paisa");
}
else if(c>5&&c<10)
{
printf("your fine is 1 rupee");
}
else if (c>10&&c<29)
{
printf("your fine is 5 rupee");
}
else
{
printf("your membership is cancelled");
}
getch();
}
