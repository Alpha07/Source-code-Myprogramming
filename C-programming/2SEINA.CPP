/* In the program user enter 4 number in array and then program
help to find the 2 smallest number in program without any pointer
variable.
*/
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[3],b,c,d;
int temp;
printf("Enter a number:\n");
for(b=0;b<=3;b++)
{
scanf("%d",&a[b]);              //user enter 4 number in array
}
printf("\nNow we show what you enter:\n");
for(b=0;b<=3;b++)
{
printf("\n%d",a[b]);             //Show what you enter in array
}
printf("\n");
printf("Now we find the smallest two number in the list");
c=a[0];                           //assign value in (c variable) the array first value.
d=a[1];                           //assign value in (d variabel) the array second value.
if(c>d)                           //in their we check the condition c value is greater than d value.
{                                 //if the c is greater then d then condition was work.
temp=c;
c=d;
d=temp;
}
for(b=2;b<=3;b++)
{
if(a[b]<=c)                                //if check the array another value is smaller than c,d value then we assign the value.
{
d=c;
c=a[b];
}
else if(a[b]<d)                            // another condition was come as you can see if the d variable is greater then another array list then we assign the value into d.
{
d=a[b];
}
}
printf("\nThe smallest element in the list is %d\n",c);      //print the value of c means the smallest element in the array list.
printf("The second smallest elemtn in the list %d",d);       //print the value of d means the second element in the array list.
getch();
}