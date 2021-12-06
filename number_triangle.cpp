#include<stdio.h>

int range = 0;
int print = 1;

int main()
{
	printf("\n\nRANGE:");
	scanf("%d",&range);
	
	
	for(int i = 1;i<=range;i++)
	{
		for(int k=1;k<=i;k++)
		{
			printf("%d ",print);
			print++;	
		}
		printf("\n");
		print=1;
	}
	for(int i = range-1;i>=1;i--)
	{
		for(int k=1;k<=i;k++)
		{
			printf("%d ",print);
			print++;	
		}
		printf("\n");
		print=1;
	}
	return 0;
}
