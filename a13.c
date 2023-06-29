#include<stdio.h>
int main ()
{
float bill,units;
printf("\n enter units :");
scanf("%f",&units); 
if(units<100 )
{
bill=50 + units*0.6;
printf("\n ur bill is = %f rs per unit",bill);
}
else if (100<units && units<=300)
{
bill=50+0.60+units-100*0.8;
printf("\n ur bill is = %f rs per unit",bill);

}
else
{
bill=50+60+160+units-300*0.9;
printf("\n ur bill is = %f rs per unit",bill);

}
 if (bill>300)
{
bill= bill+(bill*0.15);
printf("\n ur bill is = %f rs per unit with 15% bill",bill);

}
return 0;
}