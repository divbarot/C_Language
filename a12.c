#include<stdio.h>
int main()
{
int a,b,c;
printf("\n enter a:");
scanf("%d",&a);
printf("\n enter b:");
scanf("%d",&b);
printf("\n enter c:");
scanf("%d",&c);
if(a>b && a>c)
{
printf("\n a is greater ",a);
}
else
{
if(b>c)
{
printf("\n b is greater ",b);
}
else
{
printf("\n c is greater ",c);
}
}
return 0;
}