#include<stdio.h>
#include<conio.h>
xstrcpy(char *t,char *s)
{
while(*s!='\0')
{
*t=*s;
s++;
t++;
}
*t='\0';
}
void main()
{
clrscr();
char a[10],b[10];
int x,y;
printf("Enter your name:");
scanf("%[^\n]s",a);
xstrcpy(b,a);
printf("\nA =%s",a);
printf("\nB =%s",b);
getch();
}