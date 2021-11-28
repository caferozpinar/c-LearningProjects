#include <stdio.h>

float depo[20];
int basamak=0;
int deger=0;
int sonuc = 0;
int temp = 0;

//armstrong number = 153 = 1^3 + 5^3 + 3^5

int us_al(int a , int b)
{
	sonuc=1;
	for(int h=1;h<=b;h++)
	{
		sonuc = a * sonuc;
	}
	return sonuc;
}
int main()
{
	
	printf("\nARMSTRONG NUMBER or NOT?");
	for(int b=0;b<=20;b++)
	{
		depo[b]=0;
	}
	//deponun i�indeki de�erleri s�f�rlad�k(garantiye almak ama�l�)
	scanf("%d",&deger);
	
	for(int i = 10;i <= deger*10  ;i*=10)
	{
		basamak++;
		depo[basamak]=deger%i;
	}
	//say�y� altta belirtilen d�zende arraye depolad�k.
    //1254%10     = ***4
    //1254%100    = **54
    //1254%1000   = *254
    //1254%10000  = 1254 
	
	
	for(int b=basamak;b>=1;b--)
	{
		if(b>=1)
		{
		depo[b] = (depo[b]-depo[b-1]) / us_al(10,b-1) ;
	    }	
		//printf("\n%lf",depo[b]);
	}
	//say�y� kar��la�t�rma yapabilce�imiz rakamlara d�n��t�r�p arraye depolad�k.
	

	
	for(int g=0;g<=basamak;g++)
	{
		temp=us_al(depo[g],basamak) + temp;
		//armstrong number = 153 = 1^3 + 5^3 + 3^5
	}
	
	if(temp==deger)printf("\nTRUE");
	else printf("\nFALSE");
	//sonucu ekrana bast�rd�k
	
	
	
	
	
	
	return 0;
}
