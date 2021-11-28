#include<stdio.h>

int range = 0;
int yazdir = 1;

int main()
{
	printf("\n\nRANGE:");
	scanf("%d",&range);
	
	
	for(int i = 1;i<=range;i++)
	{
		for(int k=range-i-1;k>=0;k--)
		{
			printf(" ");	
		}
		
		for(int k=1;k<=i;k++)
		{
			printf("*");	
		}
		for(int k=1;k<=i-1;k++)
		{
			printf("*");	
		}
		for(int k=range-i-1;k>=0;k--)
		{
			printf(" ");	
		}
		for(int k=range-i-1;k>=0;k--)
		{
			printf(" ");	
		}
		for(int k=1;k<=i;k++)
		{
			printf("*");	
		}
		for(int k=1;k<=i-1;k++)
		{
			printf("*");	
		}
		
		printf("\n");
		
	}
	return 0;
}
