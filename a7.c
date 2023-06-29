#include<stdio.h>
int main ()
{
int a;
printf("\n enter a :");
scanf("%d",&a);
if(a/5*3==0)
{
printf("\n a(%d) is divisable by 5*3",a);
}
else
{
printf("\n a(%d) is not divisable by 5*3",a);
}
return 0;
}