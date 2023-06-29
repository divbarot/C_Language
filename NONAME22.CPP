#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,a=1;
clrscr();
for(i=1;i<=5;i++)
{
for(j=i;j>=1;j--)
{
printf("%d",a%2);
a++;
}
printf("\n");
}
getch();
}