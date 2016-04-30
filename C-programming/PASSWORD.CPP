#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a, b;
int x,y,z,za;
int r,h,u,l;
printf("Enter your password:");
scanf("%d",&a);
printf("\nNow we check what is password :%d",a);
printf("\n-----------------------------\n");
printf("Now we hacked the password\n");
for(b=0;b<=9999;b++)
{
if(b==a)
{
printf("%d",b);
break;
}
}
/*
x=a%10;
r=a/10;
y=r%10;
h=r/10;
z=h%10;
u=h/10;
za=u%10;
printf("%d",x);
printf("\n%d",y);
printf("\n%d",z);
printf("\n%d",za);
printf("\nNow we combine the all password");
printf("The password is %d%d%d%d",za,z,y,x);*/  /*
for(b=0;b<=10;b++)
{
while(b)
{                   */
getch();
}