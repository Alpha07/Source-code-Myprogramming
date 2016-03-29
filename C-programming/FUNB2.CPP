#include<stdio.h>
#include<conio.h>
#include<math.h>
mix(int *sum,float *avg,float *sta)
{
int a,b,c,d,e,x,y;
float var;
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
x=a+b+c+d+e;
y=((a*a)+(b*b)+(c*c)+(d*d)+(e+e));
*sum=x;
*avg=(x/5);
var=(y/5)-((x/5)*(x/5));
*sta=pow(var,0.5);
}
void main()
{
clrscr();
int sum;
float avg,sta;
printf("Enter a five number\n");
mix(&sum,&avg,&sta);
printf("The sum is %d\nThe average is %f\nThe standard deviation is %f",sum,avg,sta);
getch();
}