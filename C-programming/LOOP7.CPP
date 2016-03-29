#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b=0,c=0,d=0,e;
printf("Enter a number:");
scanf("%d",&a);
while(a>0)
{
scanf("%d",&e);
if(e>0)
b++;
if(e<0)
c++;
if(e==0)
d++;
a--;
}
printf("\n You Entered :\n %d Postive Number \n %d Negative nuber \n %d Zeros",b,c,d);
getch();
}