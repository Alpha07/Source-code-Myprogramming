#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b[5],c,d=0,e=0;
int f=0,g=0,h=0;
printf("\nIn there you enter a number:");
for(a=0;a<=5;a++)
{
scanf("%d",&b[a]);
}
printf("\n-------------------------------------------------------------------\n");
printf("First we print what you enter \n");
for(a=0;a<=5;a++)
{
printf("%d\n",b[a]);
}
printf("\n-------------------------------------------------------------------\n");
printf("\nCheck how much number are even and how much odd\n");
for(a=0;a<=5;a++)
{
if(b[a]%2==0)
d=d+1;
else
e=e+1;
}
printf("\nThe even number is %d",d);
printf("\nThe odd number is %d",e);
printf("\n-------------------------------------------------------------------\n");
printf("\nCheck how much nuber are postive ,negative and zero\n");
for(a=0;a<=5;a++)
{
if(b[a]>0)
f=f+1;
else if(b[a]==0)
g=g+1;
else if(b[a]<0)
h=h+1;
}
printf("\nThe Postive number are %d",f);
printf("\nThe Zero number are %d",g);
printf("\nThe Negative number are %d",h);
getch();
}