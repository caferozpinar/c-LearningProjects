#include<stdio.h>
#include<math.h>

float array[20];
int digit=0;
int value=0;
int result = 0;
//palindrome or not
//1254%10     = ***4
//1254%100    = **54
//1254%1000   = *254
//1254%10000  = 1254 

int main()
{

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
		printf("\n%lf",array[b]);
	}
	
	 for(int k=1;k<=digit/2;k++)
	 {
	 	if(array[k]==array[digit+1-k])result++;
	 }
	
	 
	if(result==digit/2)printf("\npalindrome number");
	else printf("\nnot palindrome number");
	
	return 0;
}
