#include<stdio.h>
#include<conio.h>
int pow;
float base,res=1;
so()
{
while(pow>=1)
{
res=res*base;
pow--;
}
}
void main()
{
clrscr();
printf("Enter Base:");
scanf("%f",&base);
printf("\nEnter power:");
scanf("%d",&pow);
so();
printf("\nResult is %.2f",res);
getch();
}