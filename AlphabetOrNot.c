#include<stdio.h>
#include<conio.h>
void main(){
char ch;
printf("Enter a character");
scanf("%d",&ch);
if(ch>=65 && ch<=90 || ch>=97 && ch<=122)
 printf("Alphabet");
 else
  printf("Not Alphabet");
  getch();
  }
