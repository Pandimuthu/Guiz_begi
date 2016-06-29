#include<stdio.h>
#include<conio.h>
void main()
{
 int n;
 clrscr();
 printf("Enter the no:");
 scanf("%d",&n);
 if(n>0)
 printf("Positive");
 else if(n<0)
 printf("Negative");
 else
 printf("Zero");
 getch();
 }