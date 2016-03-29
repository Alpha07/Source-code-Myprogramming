#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int no;
char ans;
start:
printf("Enter a number\n");
scanf("%d",&no);
if(no%2==0)
{
printf("Even number");
}

else
{
printf("Odd number");
}
printf("\nDo you want to exit\n");
scanf ("%c",&ans);
if (ans== 'n'||ans =='N')
{
goto start ;
}
getch();
}