#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int cp,sp,l,m;
printf("Enter cost price of an item: RS\n");
scanf("%d",&cp);
printf("Enter selling price of an item: RS\n");
scanf("%d",&sp);
if(cp>sp)
{
l=cp-sp;
printf("\nyou have made Loss, your loss is Rs\n%d",l);
}
else if(sp>cp)
{
m=sp-cp;
printf("\nyou have made profit ,your profit is RS\n%d",m);
}
else if (sp==cp)
{
printf("\nyou have neither loss not profit");
}
getch();
}