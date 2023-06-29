#include<stdio.h>
int div(int);
int main()
{
	int num;
	printf("\n check any number if it's perfact:");
	scanf("%d",&num);
	div(num);
	return 0;
}
	int div ( int num)
{
	int i=1,sum=0;
	while(i<num)
		{
			if(num % i==0)
			sum = sum + i;
			i++;
		}
	if(sum == num)
		printf("\n %d is a perfact number",num);
	else
		printf("\n %d is not a perfact number",num);
	
}