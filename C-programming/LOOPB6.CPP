#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c,d,e,f=71;
for(a=1;a<=7;a++)  //create a first for loop its work to create a rows
{		     // start of first for loop
for(b=65;b<=f;b++) //create a second for loop its work to display a ABCDEFG
{               //start of second for loop
printf("%c ",b);     //print ABCDEFG
}                         //End of second for loop
f--;                     //here the value of f,f value is 71 but in there the value was decrement because in the program ABCDEFG is show
for(c=1;c<=7;c++)    //create of third for loop its work to create a space in the program
{                // start of third for loop
printf(" ");      // in this line work space
}                 //end of the third for loop
printf("\n");     // in this line work to create a new line
}             // end of the first for loop
getch();
}