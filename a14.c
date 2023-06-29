#include<stdio.h>
int main ()
{
int age;
printf("\n enter age:");
scanf("%d",&age);
if(age >= 18)
{
printf("\n person can vote!");
}
else 
{
printf("\n person can't vote!");
}
return 0;
}