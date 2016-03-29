#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int x1,y1,x2,y2,x3,y3,m1,m2;
printf("Enter coordinates of 1st point (x1,y1):\n");
scanf("%d%d",&x1,&x2);
printf("Enter coordinates of 2nd point (x2,y2):\n");
scanf("%d%d",&x2,&y2);
printf("Enter coordinates of 3rd point (x3,y3):\n");
scanf("%d%d",&x3,&x3);
m1=(y2-y1)/(x2-x1);
m2=(y3-y2)/(x3-x2);
if(m1==m2)
{
printf("The given point fall on one straight line");
}
else
{
printf("The given point does not fall on one straight line.");
}
getch();
}