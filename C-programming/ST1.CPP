#include<stdio.h>
#include<conio.h>
#define N 3
struct students
{
int roll;
char name[20];
char department[10];
char course[10];
int year;
};
void input2(struct students *x)
{
int a,b,c;
printf("\nEnter a year you want to find :");
scanf("%d",&a);
for(b=0;b<N;b++)
{
if(a==x[b].year)
{
printf("%d.students....",b+1);
printf("\nName:%s\n",x[b].name);
}
}
}
void input(struct students *x)
{
int a,b,c;
printf("Enter a roll number you want to find:");
scanf("%d",&a);
for(b=0;b<N;b++)
{
if(a==x[b].roll)
{
printf("\nStudent find.\n");
printf("Roll no:%d",x[b].roll);
printf("\nName :%s",x[b].name);
printf("\nDepartment:%s",x[b].department);
printf("\nCourse:%s",x[b].course);
printf("\nyear:%d",x[b].year);
break;
}
}
}
void main()
{
clrscr();
struct students x[N];
int a,b,c;
printf("\nplease fullfill the regiseterion form.:\n\n");
for(a=0;a<N;a++)
{
printf("\n\nStudent number:%d",a+1);
printf("\n============================\n");
printf("\nEnter a roll number:");
scanf("%d",&x[a].roll);
printf("\nEnter your name:");
scanf("%s",&x[a].name);
printf("\nEnter your Department:");
scanf("%s",&x[a].department);
printf("\nEnter your Course:");
scanf("%s",&x[a].course);
printf("\nEnter your year:");
scanf("%d",&x[a].year);
}
printf("\n\n\n");
printf("1.print name of all student who joined in a particular year.");
printf("\n2.print the data of a student whose roll number is given.");
printf("\nChose any one:");
scanf("%d",&b);
switch(b)
{
case 1:
{
printf("\nYou chose 1st case");
input2(x);
break;
}
case 2:
{
printf("\nYou choose 2nd case");
input(x);
break;
}
default:
{
printf("\nYou enter a wrong key");
}
}
getch();
}