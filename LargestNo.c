#include<stdio.h>
#include<conio.h>
void main(){
int a,b,c;
clrscr();
pritf("Enter 3 numbers");
scanf("%d%d%d",&a,&b,&c);
printf("%d",a>b?a>c?a:c:b>c?b:c);
getch();
}
