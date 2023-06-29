#include<stdio.h>
int main ()
{
	int i,e[5],a[5],s[5],total;
	float pr;
	for (i=0;i<2;i++)
	{
	printf("enter val e [%d]:",i);
	scanf("%d",&e[i]);
	printf("\nenter val a[%d]:",i);
	scanf("%d",&a[i]);
	printf("\nenter val s [%d]:",i);
	scanf("%d",&s[i]);
	}
	printf("e\ta\ts\ttotal\tper\tgrade");
	for (i=0;i<2;i++)
	{
		total=e[i]+a[i]+s[i];
		pr = total/3;
		printf("\n%d\t%d\t%d\t%d\t%.2f",e[i],a[i],s[i],total,pr);
			if(e[i]<35 ||a[i]<35 || s[i]<35|| pr<35)
				printf("  fail ");
			else if (pr>=75)
				printf("  grade a");
			else if (pr>=60)
				printf("  grade b");
			else if (pr>=45)
				printf("  grade c ");
			else
				printf (" pass ");
	}
	return 0;
}	