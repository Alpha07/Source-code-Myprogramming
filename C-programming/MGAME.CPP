#include<stdio.h>
#include<conio.h>
void game()
{
int a,b,c=21;
while(c>1)
{
printf("\nEnter a number:");
scanf("%d",&a);
if(a>1&&a<5)
{
c=c-a;
printf("\nThe user chose %d,the matchsticks left :%d",a,c);
}
else
{
printf("\nWrong Entry:");
break;
}
b=5-a;
c=c-b;
printf("\nThe computer choose %d, the matchsticks left :%d",b,c);
}
if(c==1)
printf("\n\nLast Match stick left ,you lose");
}
void main()
{
clrscr();
int a;
printf("\n----------GAME-----------");
printf("\nChoose any one");
printf("\n1.START");
printf("\n2.END\n");
printf("Chose any one:");
scanf("%d",&a);
switch(a)
{
case 1:
{
printf("\nGame Start\n");
printf("Loading....\n");
printf("\n---------------------------------------------------------------------|\n");
printf("\nRules for the game are as follow.                                    |\n");
printf("\n1.There are 21 matchsticks.                                          |\n");
printf("\n2.The computer ask the player to pick 1,2,3 or 4 matchsticks.        |\n");
printf("\n3.After the person picks, the computer does its picking.             |\n");
printf("\n4.Whoever is forced to pick up the last matchstick loses the game.   |\n");
printf("\n---------------------------------------------------------------------|\n");
game();
break;
}
case 2:
{
printf("Game End\n");
break;
}
default :
printf("\nYou enter wrong key");
}
getch();
}