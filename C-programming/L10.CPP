#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int order,stock=50,credit;
printf("Enter your order sir\n");
scanf("%d",&order);
printf("Enter if(credit is ok=1)else(credit is not ok=0):");
scanf("%d",&credit);
if(order<=50&&credit==1)
{
printf("\nsupply has requirement");
}
else if(credit==0)
{
printf("\ndo not supply");
}
else if (credit==1&&stock<order)
{
printf("\nintimate to him data the balance will be shipped");
}
getch();
}