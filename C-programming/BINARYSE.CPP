#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[6],b;//in the two variable first is array (a[6]),and second variable used for .for loop
int *x,y;//in their same as two variable .first used for pointer variable its work for find the smallest variable in the array list. and second variable used for copy the smallest pointer value and then print..
int *r,s;//in their same as two variable .first used for pointer variable its work for find the greatest variable in the array list.and second variable used for copy the smallest pointer value of then print..
int mid;//This variable used for finding the middest value in the array.
int ee;//In the variable used for Enter variable which you want to search.
printf("Enter a number:\n");
for(b=0;b<=5;b++) //for loop start its run 6 times.
{
scanf("%d",&a[b]);//in their user enter a number for array.
}
printf("\nNow we show what you enter:\n");
for(b=0;b<=5;b++) //now for loop start its run 6 times.
{
printf("\n%d",a[b]);//in their user print a number for array.
}
x=a; //here a pointer variable assign a value of array. like base value of array .a[0]=value like 5;
for(b=0;b<=5;b++)  //for loop start its run 6 times like same as first and second for loop.
{
if(*x>=*(a+b)) //check the condition find the lowest variable.
{
*x=*(a+b);//here a pointer variable assign the lowest value in the array
y=*x;//now we assign the value of pointer to another variable y.
}
}
r=a;//here a pointer variable assign value of array. like base value of array .a[0]=value like 5;
for(b=0;b<=5;b++) //for loop start its run 6 times like same as first and second for loop.
{
if(*r<=*(a+b))//check the condition find the highest variable.
{
*r=*(a+b);//here a pointer variable assign the highest value in the array.
s=*r;//now we assign the value of pointer to another varible s.
}
}
printf("\nSmallest number in the list:%d",y); //Now we print the smallest element in the array.
printf("\nGreater number in the list:%d",s); //Now we print the greater element in the array.
mid=(s+y)/2;     //here the find mid value  like  first add high and low and then value divided into 2.
printf("\nThe middle number in the list :%d",mid);//here we print the mid value.
printf("\nEnter a number to search:");
scanf("%d",&ee);//user enter a number to search in array list
if(ee<mid)//here we check if the user enter number is small to mid then this condition was work||run.
{
for(b=0;b<=5;b++) //now for loop start
{
mid--;//here mid value was decrement
if(ee==mid) //here a condition was check if true then its run
{
printf("The value is =%d",mid); //print the mid value
break; //break the condition
}
}
}
else if(ee>mid) //here we check if the value user enter is greater then mid run||work.
{
for(b=0;b<=5;b++)//here a for loop is start
{
mid++;//here mid value was increment was continue if the condition was true
if(ee==mid)//if condtion was true then
{
printf("\nThe value is =%d",mid);//this line print the value of mid
break;
}
}
}
else
printf("\nWrong"); //if all condition was false then this condition was show.
getch();
}