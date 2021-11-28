#include<stdio.h>

int range = 0;
int yazdir = 1;

int main()
{
	printf("\n\nRANGE:");
	scanf("%d",&range);
	
	
	for(int i = 1;i<=range;i++)
	{
		for(int k=1;k<=i;k++)
		{
			printf("%d ",yazdir);
			yazdir++;	
		}
		printf("\n");
		yazdir=1;
	}
	for(int i = range-1;i>=1;i--)
	{
		for(int k=1;k<=i;k++)
		{
			printf("%d ",yazdir);
			yazdir++;	
		}
		printf("\n");
		yazdir=1;
	}
	return 0;
}
