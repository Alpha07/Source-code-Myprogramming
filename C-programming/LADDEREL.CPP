#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int ch;
printf("\n1> Add");
printf("\n2> Edit");
printf("\n3> Delete");
printf("\n4> Exit");
printf("\nEnter your choice :");
scanf("%d",&ch);
if(ch==1)
{
printf("Add option selected");
}
else if (ch==2)
{
printf("Edit option selected");
}
else if (ch==3)
{
printf("Delete option selected");
}
else if (ch==4)
{
printf("Exit option selected");
}
else
{
printf("Invalid key enter");
}
getch();
}