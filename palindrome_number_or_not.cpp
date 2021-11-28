#include<stdio.h>
#include<math.h>

float depo[20];
int basamak=0;
int deger=0;
int sonuc = 0;
//palindrome or not
//1254%10     = ***4
//1254%100    = **54
//1254%1000   = *254
//1254%10000  = 1254 

int main()
{

	for(int b=0;b<=20;b++)
	{
		depo[b]=0;
	}
	
	scanf("%d",&deger);
	
	for(int i = 10;i <= deger*10  ;i*=10)
	{
		basamak++;
		depo[basamak]=deger%i;
	}
	//sayıyı altta belirtilen düzende arraye depoladık.
    //1254%10     = ***4
    //1254%100    = **54
    //1254%1000   = *254
    //1254%10000  = 1254 
	
	for(int b=basamak;b>=1;b--)
	{
		if(b>=1)
		{
		depo[b] = (depo[b]-depo[b-1]) / pow(10,b-1) ;
	    }	
		printf("\n%lf",depo[b]);
	}
	//sayıyı karşılaştırma yapabilceğimiz rakamlara dönüştürüp arraye depoladık.
	
	 for(int k=1;k<=basamak/2;k++)
	 {
	 	if(depo[k]==depo[basamak+1-k])sonuc++;
	 }
	/*
	sayının iki tarafından sayıların benzerliğini 
	karşılaştırarak palindrome olup olmadığına karar verdik. 
	*/
	 
	if(sonuc==basamak/2)printf("\npalindrome number");
	else printf("\nnot palindrome number");
	//sonucu ekrana bastırdık
	return 0;
}
