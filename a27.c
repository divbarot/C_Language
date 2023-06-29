#include<stdio.h>
int main()
{
	char str[20],str1[20];
	int i,j,k=0;
	printf("enter string:");
	gets(str);
	printf("\n enter string :");
	gets(str1);
	printf(" your string is:%s",str);
	i=0;
	while(str[i]!='\0')
	{
		i++;
	}
		
		j=i-1;
		while(k<=j)
		{
			str[i++]=str1[k];
			k++;
		}
			str1[k]='\0';
			printf("%s",str1);
			return 0;
}
