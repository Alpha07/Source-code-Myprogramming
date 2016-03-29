#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char ch;
printf("Enter any charcter to find out weather it is lower case or not:");
scanf("%c",&ch);
(ch>=97&&ch<=122?printf("\nThe input character is lower case ."):printf("\n The input character is not lower case ."));

getch();
}