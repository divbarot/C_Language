#include<stdio.h>
int main ()
{
int a,b;
printf("\n enter a :");
scanf("%d",&a);
printf("\n enter b:");
scanf("%d",&b);
if(a*b%3*7==0)
{
printf("\n a(%d)*b(%d) is divisible by 3*7",a,b);
}
else
{
printf("\n a(%d)*b(%d) is not  divisible by 3*7",a,b);
}
return 0;
}