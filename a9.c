#include<stdio.h>
int main ()
{
int a,b;
printf("\n enter a :");
scanf("%d",&a);
printf("\n enter b:");
scanf("%d",&b);
if((a+b)%(a*b)==0)
{
printf("\n\t multiplication is divisible by thier addtion",a,b);
}
else
{
printf("\n\t multiplication is not divisible  by thier addtion",a,b);
}
return 0;
}