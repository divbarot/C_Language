#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,l=1;
clrscr();
for (i=1;i<=5;i++)
{
for (j=1;j<=i;j++)
{
l++;
if (j%2==0)
{
printf("%c",l+63);
}
else
{
printf("%c",l+95);
}
}
printf("\n");
}
getch();
}