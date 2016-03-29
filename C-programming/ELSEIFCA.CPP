#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c,j;
printf("Enter a first number :");
scanf("%d",&a);
printf("\nEnter a second number :");
scanf("%d",&b);
printf("what you do with this number\n");
printf("Addition press 1\n");
printf("Subtraction press 2\n");
printf("Multiplication press 3\n");
printf("division press 4\n");
printf("moduler press 5\n");
printf("press key:");
scanf("%d",&j);
if(j==1)
{
printf("you press A means addition\n");
c=a+b;
printf("the answer is %d",c);
}
else if(j==2)
{
printf("you press B means subtraction \n");
c=a-b;
printf("the answer is %d",c);
}
else if(j==3)
{
printf("you press C means multiplation \n");
c=a*b;
printf("the answer is %d",c);
}
else if(j==4)
{
printf("you press D means division \n");
c=a/b;
printf("the answer is %d",c);
}
else if(j==5)
{
printf("you press E means moduler \n");
c=a%b;
printf("the answer is %d",c);
}
else
{
printf("\+nyou enter wrong key");
}
getch();
}