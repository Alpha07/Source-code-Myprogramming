#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c,d,e,x,y,z,o,p;
printf("Enter a class you are (ex:-1,2,3) :");
scanf("%d",&a);
switch(a)
{
case 1:
printf("1st class student result you are pass or not\n");
printf("Enter a subject in your class\n");
scanf("%d",&b);
for(c=1;c<=b;c++)
{
printf("Enter %d subject number:",c);
scanf("%d",&d);
if(40<=d)
{
printf("pass\n");
}
else
{
printf("fail\n");
printf("but we give you some grace number :5");
e=d+5;
printf("\nNow your number is %d\n",e);
if(e>=40)
{
printf("Now you are pass\n ");
}
else
{
printf("you are fail try again\n");
}
}
}
break;
case 2:
printf("2nd class student result you are pass or not\n");
printf("Enter a subject in your class:\n");
scanf("%d",&b);
for(c=1;c<=b;c++)
{
printf("Enter %d subject number:",c);
scanf("%d",&d);
if(40<=d)
{
printf("pass\n");
}
else
printf("fail\n");
}
printf("please tell me how many subject you are fail\n");
scanf("%d",&x);
if(x>2)
{
printf("\nsorry we can't help you");
}
else
printf("Ok we give you grace number 5 every subject in which you fail\n");
printf("please enter your number in which you are fail");
scanf("%d",&y);
scanf("%d",&z);
o=y+5;
p=z+5;
printf("now your number is first fail subject number is %d and second subject fail number is %d",o,p);
break;
case 3:
printf("3rd class student result you are pass or not\n");
printf("Enter a subject in your class\n");
scanf("%d",&b);
for(c=1;c<=b;c++)
{
printf("Enter %d subject number:",c);
scanf("%d",&d);
if(40<=d)
{
printf("pass\n");
}
else
printf("fail\n");
}
break;
}
getch();
}
