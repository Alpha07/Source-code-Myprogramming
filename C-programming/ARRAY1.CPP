#include<stdio.h>
#include<conio.h>
/*
add(int x)
{
printf("\n%d",x);
}
*/
void main()
{
clrscr();
int a[5];
int b,c,d;
for(b=0;b<=4;b++)
{
printf("%d.Enter a number:\n",b);
scanf("%d",&a[b]);
}
for(d=0;d<=4;d++)
{
printf("\n%d",a[d]);
}
printf("\n--------------\n");
printf("\n%d",a[3]);
getch();
}