#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char a;
printf("Enter any single letter ,digit or special symbol:");
scanf("%c",&a);
if(a>=65&&a<=90)
{
printf("You Enter capital letter\n");
}
if(a>=97&&a<=122)
{
printf("you Enter small letter\n");
}
if(a>=48&&a<=57)
{
printf("you Enter digit\n");
}
if((a>=0&&a<=47)||(a>=58&&a<=64)||(a>=91&&a<=96)||(a>=123&&a<=127))
{
printf("you enter special symbol");
}
getch();
}