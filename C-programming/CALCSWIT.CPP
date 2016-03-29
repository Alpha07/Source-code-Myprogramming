#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int b,c,d=0,e=0,f,g,x;
char a;
printf("\t CHOOSE ANY ONE\n");
printf("A>Addition \n");
printf("B>Subration\n");
printf("C>Multiplication\n");
printf("D>Division\n");
printf("E>Moduler\n");
printf("Q>Quit\n");
printf("Enter a key any one\n");
scanf("%c",&a);
switch(a)
{
case 'a':
case 'A':
{
printf("\n Enter the number of element you want to add:");
scanf("%d",&g);
printf("please enter %d number one by one :\n",g);
for(b=1;b<=g;b++)
{
scanf("%d",&f);
d=d+f;
}
printf("sum of %d number =%d \n",g,d);
break;
}
case 'b':
case 'B':
printf("\nEnter first number:");
scanf("%d",&c);
printf("\nEnter second number:");
scanf("%d",&b);
x=c-b;
printf("\nThe answer is %d",x);
break ;
case 'c':
case 'C':
printf("\nEnter first number:");
scanf("%d",&c);
printf("\nEnter second number:");
printf("%d",&b);
x=c*b;
printf("\nThe answer is %d",x);
break;
case 'd' :
case 'D' :
printf("\nEnter first number:");
scanf("%d",&c);
printf("\nEnter second number:");
scanf("%d",&b);
x=c/b;
printf("\nThe answer is %d",x);
break;
case 'e':
case 'E':
printf("\n Enter first number:");
scanf("%d",&c);
printf("\nEnter second number:");
scanf("%d",&b);
x=c%b;
printf("\nThe answer is %d",x);
break;
case 'q':
case 'Q':
break;
default:
printf("You Enter wrong key");
}
getch();
}



