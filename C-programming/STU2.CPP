#include<stdio.h>
#include<conio.h>
#define F 2
struct customer
{
long unsigned int account;
char name[10];
long signed int balance;
};
void pri(struct customer *b)
{
int a;
printf("\nNow we print the Account number and name of each customer with balance below Rs.100.\n");
for(a=0;a<F;a++)
{
if(100.00>b[a].balance)
{
printf("\n%d.User",a+1);
printf("\nAccount number:-%lu",b[a].account);
printf("\nUser Name:-%s",b[a].name);
printf("\nBalance:-%ld",b[a].balance);
}
}
}
void with(struct customer *b)
{
int aa,bb;
long unsigned int x;
long signed int y,cc;
printf("\n1.deposit");
printf("\n2.withdraw");
printf("\nChoose any one:");
scanf("%d",&aa);
switch(aa)
{
case 1:
{
printf("Enter your Account number:");
scanf("%lu",&x);
printf("\nEnter Amount:");
scanf("%ld",&y);
for(bb=0;bb<F;bb++)
{
if(x==b[bb].account)
{
cc=b[bb].balance+y;
printf("\nYour old balance is :%ld",b[bb].balance);
printf("\nNow your balance is :%ld",cc);
}
}
break;
}
case 2:
{
printf("Enter your Account number:");
scanf("%lu",&x);
printf("\nEnter Amount:");
scanf("%ld",&y);
for(bb=0;bb<F;b++)
{
if(x==b[bb].account)
{
cc=b[bb].balance-y;
if(cc>=0)
{
printf("\nYour old balance is %ld",b[bb].balance);
printf("\nNow your balance is :%ld",cc);
break;
}
else
{
printf("\nThe balance is insufficient for the specified withdrawal");
printf("\nYour balance is Now :%ld",b[bb].balance);
break;
}
}
}
break;
}
default:
{
printf("\nYou enter a wrong key.");
break;
}
}
}
void main()
{
clrscr();
struct customer bank[F];
int a,b,c;
printf("\n\n-------------------------------\n");
printf("\n-----------RANDOM BANK-----------\n");
printf("\nEnter your A/C number,name,balance in account\n");
for(a=0;a<F;a++)
{
printf("\n%d.USER\n",a+1);
printf("\nEnter Your Account number:\n");
scanf("%lu",&bank[a].account);
printf("\nEnter Your Name :\n");
scanf("%s",&bank[a].name);
printf("\nEnter Your Balance in Account:\n");
scanf("%ld",&bank[a].balance);
}
printf("\n\n======================================\n");
printf("\n1.Print the account number and name of each customer with balance below RS.100\n");
printf("2.Withdraw or Deposit \n");
printf("choose any one:");
scanf("%d",&b);
switch(b)
{
case 1:
{
printf("\nYou Enter 1st case\n");
pri(bank);
break;
}
case 2:
{
printf("\nYou Enter 2nd case\n");
with(bank);
break;
}
default:
{
printf("\nYou enter wrong key");
break;
}
}
getch();
}