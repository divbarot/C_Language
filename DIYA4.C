#include<stdio.h>
#include<conio.h>
void main()
{
	char c=65,i;
     //	printf(" enter n: ");
     //  scanf(" %d ",&n);
       clrscr ();
       do
	{
		i=c+32;
		printf("\n %c-%c",c,i);
		c++;
	}
	while(c<=90);
	 getch();
}