#include<stdio.h>
#include<conio.h>
void main ()
{
int i,a=0,b=1,c,n;
clrscr();
printf("enter:n");
scanf(" %d ",&n);
for (i=1;i<=n;i++)
{
c=a+b;
a=b;
b=c;
printf(" %d ",a);
}
getch();
}