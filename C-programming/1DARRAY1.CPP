#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[10],i,sum=0;
cout<<"Enter the 10 number's\n ";//display the line
for(i=0;i<10;i++){ // first loop start for array
cin>>a[i];           //input the number
}
for (i=0;i<10;i++){    //loop start for addition the total
sum=sum+a[i];      //addition formula
}
cout<<"total="<<sum;   // display the total
getch();
}