#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int ram,shyam,ajay;
printf("Enter age ram \n");
scanf("%d",&ram);
printf("Enter age shyam \n");
scanf("%d",&shyam);
printf("Enter age ajay \n");
scanf("%d",&ajay);
if(ram<shyam)
{
 if(ram>ajay)
 {
 printf("\nAjay is the younger");
 }
 else
 {
 printf("\nRam is the younger");
 }
}
else
{
 if(shyam>ajay)
 {
 printf("\nAjay is the younger");
 }
 else
 {
 printf("\nshayam is the younger");
 }
}
getch();
}