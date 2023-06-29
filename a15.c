#include<stdio.h>
int main ()
{
float basic,gross,da,hra;
printf("\n enter the basic salary of an employee:");
scanf("%f",&basic);
if(basic>=5000)
{
da=basic*0.2;
hra=basic*0.8;
}
else if ( 5000<basic && basic <= 10000)
{
da=basic*0.3;
hra=basic*1.2;
}
if( 10000<basic  && basic <= 15000)
{
da=basic*0.4;
hra=basic*1.5;
}
if(basic<=15000)
{
da=basic*0.50;
hra=basic*0.20;
}
gross = basic+hra+da;
printf("\n gross salary of an employee = %f ",gross);
return 0;
}