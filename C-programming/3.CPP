#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c,d,e,agg;
float per;
printf("Input the marks per subjects");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
agg=a+b+c+d+e;
per=agg*(100/500.0);
printf("\nthe aggregate mark is :%d",agg);
printf("\nthe percentage is :%f%",per);
getch();
}