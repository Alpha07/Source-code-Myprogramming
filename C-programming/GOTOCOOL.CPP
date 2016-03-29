#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
jump:
int a,b ;
char c;
printf("Enter a number\n");
scanf("%d",&a);
printf("\nThe square of a %d is %d\n",a,a*a);
printf("\nWant to continue in the program: y/n\n");
scanf("%s",&c);
if(c=='y')
{
goto jump;
}
getch();
}