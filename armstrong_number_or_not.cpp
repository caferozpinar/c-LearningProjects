#include <stdio.h>

float array[20];
int digit=0;
int value=0;
int result = 0;
int temp = 0;

//armstrong number = 153 = 1^3 + 5^3 + 3^5

int pow(int a , int b)
{
	result=1;
	for(int h=1;h<=b;h++)
	{
		result = a * result;
	}
	return result;
}
int main()
{
	
	printf("\nARMSTRONG NUMBER or NOT?");
	for(int b=0;b<=20;b++)
	{
		array[b]=0;
	}
	scanf("%d",&value);
	
	for(int i = 10;i <= value*10  ;i*=10)
	{
		digit++;
		array[digit]=value%i;
	}
    //1254%10     = ***4
    //1254%100    = **54
    //1254%1000   = *254
    //1254%10000  = 1254 
	
	
	for(int b=digit;b>=1;b--)
	{
		if(b>=1)
		{
		array[b] = (array[b]-array[b-1]) / pow(10,b-1) ;
	    }
	}
	

	
	for(int g=0;g<=digit;g++)
	{
		temp=pow(array[g],digit) + temp;
		//armstrong number = 153 = 1^3 + 5^3 + 3^5
	}
	
	if(temp==value)printf("\nTRUE");
	else printf("\nFALSE");
	
	return 0;
}
