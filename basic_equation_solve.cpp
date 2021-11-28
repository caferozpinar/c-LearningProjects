#include<stdio.h>
#include<math.h>
//basic denklem çözümü



int main(){
	
	int a,b,c;
    float x1,x2;
    float delta;
    
    printf("denklemin a'sini giriniz:");
    scanf("%d",&a);
    
    printf("denklemin b'sini giriniz:");
    scanf("%d",&b);
    
	printf("denklemin c'sini giriniz:");
    scanf("%d",&c);
    printf("denklem : %dx+%dx+%d\n",a,b,c);
    
    delta = b*b -4*a*c;
    x1=(-b + (sqrt(delta))  )/2*a;
    x2=(-b - (sqrt(delta))  )/2*a;
    printf("denklemin kokleri:x1=%f x2=%f",x1,x2);
    
	return 0;
}



