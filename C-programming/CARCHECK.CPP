#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
long int a,b,c,d=0,e;  /*long int used because if i use only int
then if user enter five digit number more then 44444 its run garbage value printf*/
printf("Please Enter your car number last four digit (ex:- 7812):");
scanf("%ld",&a);
e=a;           //its print the value user enter
while(a)    //its loop work to check user enter 4length digit only
{
a=a/10;
d++;
}            //End of loop
if(d>=5||d<=3) //in there check the user enter 4length digit only
{
printf("\nYou not enter a four number:");
}
else
{
b=e%10;
if(b%2==0)    //work to even number
{
printf("\nYour car number is Even(%ld) ",e);
printf("\nNow we tell Much day you drive your car:");
for(c=0;c<=31;c++)
{
if(c%2==0)
{
printf("\n%ld",c);
}
}
}
else       //work to odd number
{
printf("\nYour car number is odd(%ld)",e);
printf("\nNow we tell much day you drive your car:");
for(c=0;c<=31;c++)
{
if(!(c%2==0))
{
printf("\n%d",c);
}   /*
else
printf("\n%d",c);  */
}
}
}
getch();
}
