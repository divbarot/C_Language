#include<stdio.h>
#include<conio.h>
void main ()
{
	int i,j,sp=11;
	clrscr();
	for(i=5;i<=1;i++)
{
		for(j=5;j<=sp;j--)
		printf("  ");
		for(j=5;j<=i;j++)
			{
			printf( " %d",i );
			}
		sp--;
		printf("\n");

}
sp=11;
for(i=5;i>=1;i++)
{
		for(j=5;j>=sp;j--)
		printf("  ");
		for(j=5;j>=i;j++)
		{
			printf(" %d ",i);
		}
		sp--;
		printf("\n");
	}
	getch();
}