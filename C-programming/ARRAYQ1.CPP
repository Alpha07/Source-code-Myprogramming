#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[25];
int b,c,d,e;
printf("--------Start program-------------\n");
for(b=0;b<=24;b++)
{
printf("\n%d.Enter a number:",b+1);
scanf("%d",&a[b]);
}
printf("\n==========================================\n");
for(e=0;e<=24;e++)
{
printf("\n%d>>.The value you enter is %d",e+1,a[e]);
printf("\n The address of value is %u",&a[e]);
}
printf("\n==========================================\n");
printf("\n\n------------------------------------\n\n");
printf("Enter a number to find:");
scanf("%d",&c);
for(d=0;d<=24;d++)
{
if(c==a[d])
{
printf("This is the value to want to search %d",a[d]);
printf("\nAnd the address is %u",&a[d]);
}
}   /*
else
{
printf("\nSorry you enter a wrong key");
}     */
getch();
}