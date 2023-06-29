#include<stdio.h>
int div(int);
int main()
{
	int num,rev=0;
	printf(" \n enter the number to reverse :");
	scanf("%d",&num);
	rev=div(num);
	printf("\n reverse of %d is =%d",num,rev);
	return 0;

}
		int div (int num)
{
		int sum,rev=0;
		while (num>0)
		{
			sum=num%10;
			rev = rev*10+sum;
			num = num/10;
		}
		return rev;
}
