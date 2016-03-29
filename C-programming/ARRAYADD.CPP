#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b;
int x[4][2];

for(a=0;a<=4;a++)
{
printf("%d.Enter a number:\n",a);
scanf("%d %d",&x[a][0],&x[a][1]);
}
for(b=0;b<=4;b++)
{
printf("You enter :%d %d\n",x[b][0],x[b][1]);
printf("Address is :%u %u\n",&x[b][0],&x[b][1])	;
}
printf("---------------------------------\n");
printf("\nPrint x[2][0]:%d.And Address is %u",x[2][0],&x[2][0]);
printf("\nPrint x[2][1]:%d.And Address is %u",x[2][1],&x[2][1]);
getch();
}