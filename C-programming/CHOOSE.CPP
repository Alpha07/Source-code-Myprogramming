#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c;
char g;
printf("Enter gender,year of service and Qualifications(0=G,1=pg):");
scanf("%c%d%d",&g,&a,&b);
if(g=='M' && a>=10 && b==1)
c =15000;
else if ((g=='M' && a>10 && b==0)||(g=='M' && a<10 && b==1))
c= 10000;
else if (g=='M' && a<10 && b==0)
c=7000;
else if (g=='F' && a>=10 && b==1)
c=12000;
else if (g=='F' && a>=10 && b==0)
c=9000;
else if (g=='F' && a<10 && b==1)
c=10000;
else if(g=='F' && a<10 && b==0)
c=6000;
printf("\nyour is %d",c);
getch();
}
