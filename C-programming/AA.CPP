#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int sum,num,add,a,b,c,d,d1,d2,d3,d4;
printf("Enter any four digit number:");
scanf("%d",&num);
a=num/10;
d1=num%10;
b=a/10;
d2=a%10;
c=b/10;
d3=b%10;
d=c/10;
d4=c%10;
sum=d1+d4;
add=d2+d3;
printf("\nSum of 2nd and 3rd digit is =%d",add	);
printf("\nSum of 1st and 4th digit is =%d",sum);
printf("\nThe first number is %d",d4);
printf("\nThe second number is %d",d3);
printf("\nThe third number is %d",d2);
printf("\nThe fourth number is %d",d1);
getch();
}
