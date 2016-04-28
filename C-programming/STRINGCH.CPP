#include<stdio.h>
#include<conio.h>
#include<string.h>
#define FOUND 1
#define NOTFOUND 0
void main()
{
clrscr();
char a[6][10],b[15];
int x,y,z;
printf("WELCOME:RWORLD.com\n");
printf("======================================\n");
printf("Please enter your company main member:\n");
for(x=1;x<=6;x++)
{
scanf("%s",a[x]);
}
printf("\nNow we show what you enter:\n");
for(x=1;x<=6;x++)
{
printf("\n%d.%s",x,a[x]);
}
printf("\n\nAll the member will be secure.\n");
printf("\nPlease if you want to login please write your user name:\n");
scanf("%s",b);
printf("\nNow we check you are member or outsider\n");
y=NOTFOUND;
for(x=1;x<=6;x++)
{
z=strcmp(&a[x][0],b);
if(z==0)
{
printf("WELCOME TO RWORLD...\n");
y=FOUND;
break;
}
}
if(y==NOTFOUND)
printf("SORRY ,You are not allowed");
getch();
}