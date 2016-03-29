#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c,d,e;
printf("Enter which class you are EX:-(1,2,3):");
scanf("%d",&a);
switch(a)
{
case 1:
printf("You enter 1st class \n");
printf("please enter how much subject in your class\n");
scanf("%d",&b);
for(c=1;c<=b;c++)
{
printf("\nEnter your %d subject number :",c);
scanf("%d",&d);
if(40<=d)
{
printf("pass");
}
else
{
printf("fail");
}
}
printf("\n\nPlease enter how much subject fail\n");
scanf("%d",&e);
if(e<=3)
{
printf("you are promote to next class");
}
else
{
printf("Sorry you are not going to next class");
}
break;
case 2:
printf("You are 2nd class \n");
printf("Please enter how much subject in class:");
scanf("%d",&b);
for(c=1;c<=b;c++)
{
printf("\nEnter your %d subject number",c);
scanf("%d",&d);
if(40<=d)
{
printf("Pass");
}
else
{
printf("fail");
}
}
printf("\n\nPlease enter how much subject number:");
scanf("%d",&e);
if(e<=2)
{
printf("You are promoted to next class");
}
else
printf("sorry you are fail in this class");
break;
case 3:
printf("You are 3rd class\n");
printf("Please enter how much subject in your class:");
scanf("%d",&b);
for(c=1;c<=b;c++)
{
printf("\nPlease enter %d subject number:",c);
scanf("%d",&d);
if(40<=d)
{
printf("pass");
}
else
{
printf("fail");
}
}
printf("\nPlease enter how much subject in fail:");
scanf("%d",&e);
if(e<=1)
{
printf("you are promoted to next class");
}
else
{
printf("sorry you are fail in this class");
}
break;
default :
printf("you enter a wrong class");
}
getch();
}