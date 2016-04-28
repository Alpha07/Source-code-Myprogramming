#include<stdio.h>
#include<conio.h>
xstrlen(char *s)
{
int b=0;
while(*s!='\0')
{
b++;
s++;
}
return(b);
}
void main()
{
clrscr();
char b[20],a[20];
int x,y;
printf("Enter your name:");
scanf("%[^\n]s",b);
printf("\nEnter your class:");
scanf("%s",a);
x=xstrlen(b);
y=xstrlen(a);
printf("\nYour name is :%s ,length:%d",b,x);
printf("\nYour class is :%s ,length:%d",a,y);
getch();
}