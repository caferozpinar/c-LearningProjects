#include<stdio.h>
#include<math.h>
double factresult = 1;
double result = 0;
int powresult = 0;
int x=0;
double temp=0;
//e^x = 1+x^1/1+x^2/2
double factorial(int a)
{
	factresult = 1.0;
	for(int k=1;k<=a;k++)
	{
		factresult*=k;
		
	}
	return factresult;
}
int pow(int a , int b)
{
	powresult=1;
	for(int h=1;h<=b;h++)
	{
		powresult = a * powresult;
	}
	return powresult;
}
int main()
{
    printf("value to be calculated e^");
    scanf("%d",&x);
    for(int i=0;i<=15;i++)
    {
    	result+=(pow(x,i) / factorial(i));
	}
	printf("\nresult = %lf",result);
	printf("\nreal result = %lf",exp(x));
}


