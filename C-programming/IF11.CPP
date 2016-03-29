#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int x,y;
printf("Enter coordinates of a point(x,y)\n");
scanf("%d%d",&x,&y);
if(x==0&&y!=0)
{
printf("The point lies on y axis");
}
else if(y==0&&x!=0)
{
printf("The point lies on x axis");
}
else if (y==0&&x==0)
{
printf("the point lies on original ");
}
getch();
}