#include<stdio.h>
int main ()
{
float income,tax,c,d,x,y,r,s;
printf("\n enter the income :");
scanf("%F",&income);
if (income <= 2500)
{
c=income*0;
d=income;
printf("\n ur tax is %f per ur salary :");
printf("\n ur income is %f rs after cuting tax",d);
}
else if(2500<income && income<=5000)
{
e=250+(income-5000)*0.2;
f=income;
printf("\n ur tax is %f per ur salary :");
printf("\n ur income is %f rs after cuting tax",f);
}
 else if (5000<income && income<=10000)
{
r=250+1000+(income-10000)*0.3;
s=income;
printf("\n ur tax is %f per ur salary :");
printf("\n ur income is %f rs after cuting tax",s);
}
else(income <= 1000)
{
x=250+1000+(income-10000)*0.3;
y=income;
printf("\n ur tax is %f per ur salary :");
printf("\n ur income is %f rs after cuting tax",y);
}
return 0;
}
 