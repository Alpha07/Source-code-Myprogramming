#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int amt,ten,fif,hun;
/*amt=amount,ten=currency notes of ten,fif=currency notes of fifty,hun=current notes of hundred*/
printf("Enter amount to be withdrawn:");
scanf("%d",&amt);
ten=amt/10;
fif=amt/50;
hun=amt/100;
printf("/n The cashier will give you \n%d Ten notes\nOR\n%d Fifty notes\nOR\n%d Hundred notes",ten,fif,hun);
getch();
}