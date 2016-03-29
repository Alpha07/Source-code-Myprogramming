#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c,d,e;
printf("Enter a rows :");
scanf("%d",&a);
e=a;
for(b=1;b<=a;b++)
{
for(c=1;c<=e;c++)
{
printf(" ");
}
e--;
for(d=1;d<=b;d++)
{
printf("%d",b);
}
printf("\n");
}
getch();
}