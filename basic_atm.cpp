#include<stdio.h>
#include<math.h>
#include<conio.h>

int main(){
	int kayitlisifre = 3897;
	int sifre, islem, tutar, sira;
	int bakiye =100000;
	int onay = 0;
	int hak=0;
	
	
	
	
	
	while(hak<3 && onay!=1) 
	{
	printf("\nsifre giriniz:");
	scanf("%d", &sifre);
	if(sifre!=kayitlisifre && onay==0)
	{
		printf("\nsifre yanlis.");
		hak += 1;	
	}
	if(sifre==kayitlisifre && onay==0)
	{
		printf("\nsifre dogru.\n");
	    onay = 1;
		printf("HOSGELDINIZ\n");
		printf("islemler\n 1:Para Cekme\n 2:Para Yatýrma\n 3:Havale/EFT yapma\n 4:bakiye sorgula\n 5:kart iade\n\n\n\n");
		printf("islem:");
		hak = 10;	
	}
    }   
	while(onay==1)
	{
		scanf("%d",&islem);
		
		switch(islem)
		{
			
		case 1:
			printf("\nbakiyeniz:%d\n",bakiye);
			printf("cekilecek tutar:");
			scanf("%d",&tutar);
			while(tutar > bakiye)
			{
				printf("bakiye yetersiz!\n");
				printf("yeni tutar giriniz:");
				scanf("%d",&tutar);
			}
			bakiye -= tutar;
			printf("\nyeni bakiyeniz:%d",bakiye);
			islem=0;
			tutar=0;
			printf("\n\n\n\n\nbaska islem yapmak ister misiniz?");
			printf("\nislemler\n 1:Para Cekme\n 2:Para Yatýrma\n 3:Havale/EFT yapma\n 4:bakiye sorgula\n 5:kart iade\n\n\n\n");
		    printf("islem:");
			break;
				
		case 2:
			printf("\nbakiyeniz:%d",bakiye);
			printf("\nyatirilacak tutar:");
			scanf("%d",&tutar);
			bakiye += tutar;
			printf("\nyeni bakiyeniz:%d",bakiye);
			islem=0;
			tutar=0;
			printf("\n\n\n\n\nbaska islem yapmak ister misiniz?");
			printf("\nislemler\n 1:Para Cekme\n 2:Para Yatýrma\n 3:Havale/EFT yapma\n 4:bakiye sorgula\n 5:kart iade\n\n\n\n");
		    printf("islem:");
			break;
			
		case 3:
			printf("\nbakiyeniz:%d",bakiye);
			printf("\nhavale yapilacak tutar:");
			scanf("%d",&tutar);
			while(tutar > bakiye)
			{
				printf("bakiye yetersiz!\n");
				printf("yeni tutar giriniz:");
				scanf("%d",&tutar);
			}
			bakiye -= tutar;
			printf("\nhavale yapilan tutar:%d",tutar);
			printf("\nyeni bakiyeniz:%d",bakiye);
			islem=0;
			tutar=0;
			printf("\n\n\n\n\nbaska islem yapmak ister misiniz?");
			printf("\nislemler\n 1:Para Cekme\n 2:Para Yatýrma\n 3:Havale/EFT yapma\n 4:bakiye sorgula\n 5:kart iade\n\n\n\n");
		    printf("islem:");
			break;
			
			
	    case 4:
			printf("\nbakiyeniz:%d\n",bakiye);
			islem=0;
			tutar=0;
			printf("\n\n\n\n\nbaska islem yapmak ister misiniz?");
			printf("\nislemler\n 1:Para Cekme\n 2:Para Yatýrma\n 3:Havale/EFT yapma\n 4:bakiye sorgula\n 5:kart iade\n\n\n\n");
		    printf("islem:");
			break;
			
		case 5:
		    printf("kart iade edildi");
			onay = 2;
			break;	
		default:
			printf("\nLUTFEN GECERLI BIR ISLEM GIRIN!");
			printf("\n\n\n\nislemler\n 1:Para Cekme\n 2:Para Yatýrma\n 3:Havale/EFT yapma\n 4:bakiye sorgula\n 5:kart iade\n\n\n\n");
		    printf("islem:");
			scanf("%d",&islem);
		}	
	}
	
	
	
	
	
	
	if( hak==4 && onay==0 )
	{
		printf("\nCok fazla yanlis sifre girildi");
		printf("\nkart bloke.");
	}
	return 0;
}
