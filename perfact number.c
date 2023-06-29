#include<stdio.h>
int div(int);
int main()
{
	int i=1,num,sum=0;
	printf("\n check any number if it's perfact");
	scanf("%d",&num);
	return 0;
}
	int div (int num)
{
	int i=1,num,sum=0;
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
	return perfact number;
}