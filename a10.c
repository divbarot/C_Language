#include<stdio.h>
int main ()
{
int a,b,c;
printf("\n enter a :");
scanf("%d",&a);
printf("\n enter b:");
scanf("%d",&b);
printf("\n enter c :");
scanf("%d",&c);

if(a>=b,a>=c)
{
printf("\n a is largest number ",a,b,c);
}
else
{
printf("\n a is  not largest number ",a,b,c);
}
if(b>=a,b>=c)
{
printf("\n b second  largest number ",b,a,c);
}
else
{
printf("\n b is  not largest number ",b,a,c);
}
if(c>=a,c>=b)
{
printf("\n c is largest number ",c,a,b);
}
else
{
printf("\n c is not largest number ",c,a,b);
}
return 0;
}