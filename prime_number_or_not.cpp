#include<stdio.h>


int main()
{
	int result=0;
	int x=0;
	printf("enter a number:");
	scanf("%d",&x);
	for(int i=1;i<=x;i++)
	{
		if(x%i==0)result++;
	}
	if(result==2)printf("prime number");
	else printf("not prime number");
	return 0;
}
