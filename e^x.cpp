#include<stdio.h>
#include<math.h>
double fsonuc = 1;
double sonuc = 0;
int usonuc = 0;
int x=0;
double temp=0;
//e^x = 1+x^1/1+x^2/2
double faktoriyel(int a)
{
	fsonuc = 1.0;
	for(int k=1;k<=a;k++)
	{
		fsonuc*=k;
		
	}
	return fsonuc;
}
int us_al(int a , int b)
{
	usonuc=1;
	for(int h=1;h<=b;h++)
	{
		usonuc = a * usonuc;
	}
	return usonuc;
}
int main()
{
    printf("hesaplanýcak deger e^");
    scanf("%d",&x);
    for(int i=0;i<=15;i++)
    {
    	sonuc+=(us_al(x,i) / faktoriyel(i));
	}
	printf("\nsonuc = %lf",sonuc);
	printf("\ngercek sonuc = %lf",exp(x));
}


