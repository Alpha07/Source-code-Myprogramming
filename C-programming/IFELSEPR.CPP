#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int no;
printf("Enter a number ?\n");
scanf("%d",&no);
if(no%2==0)
{
printf("the number is even");
}
else
{
printf("the number is odd ");
}
getch();
}