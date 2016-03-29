#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char a; //here a variable is create (a)
printf("Enter a character:"); //show the line in display
scanf("%c",&a);  //user enter a character
switch(a)     //here a switch case is create and its depend to user what they ebter
{                //start of switch case
case 118:   //in this line v is define as ascii 118
printf("This is v/118");    //here a print the line if user choice v
break;       //end of this case
case 97:     //in this line a is define as ascii 97
printf("This is a/97");     //here a print the line if user choice a
break;       //end of this case
case 120: // in this line x is define as ascii 120
printf("This is x/120");// here a print the line if user choice x
break;    //end of this case
default:     // if user was not enter (v,a,x)then this case is start
printf("You enter a wrong character.");//print the line in display
}                                 //end of switch case.
getch();
}