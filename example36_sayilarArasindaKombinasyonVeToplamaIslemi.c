#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int farkiTopla(int,int);
void ekranaYaz(int,int);
int faktoriyel(int);
void main(int argc,char *argv[])
{
	int sayi1,sayi2;
	sayi1=atoi(argv[1]);
	sayi2=atoi(argv[2]);
	if(sayi1>sayi2)
	printf("%d sayisi %d sayisindan büyüktür.",sayi1,sayi2);
	else if(sayi1<sayi2)
	printf("%d sayisi %d sayisindan küçüktür.",sayi1,sayi2);

	int toplam=farkiTopla(sayi1,sayi2);
	printf("İki sayi arasındaki sayiların toplamı:%d \n",toplam);
	ekranaYaz(sayi1,sayi2);
	float sonuc;
	if(sayi1>sayi2){
		sonuc=faktoriyel(sayi1)/(faktoriyel(sayi2)*faktoriyel(abs(sayi1-sayi2)));
		printf("Kombinasyon :%f",sonuc);
	}
}
void ekranaYaz(int sayi1,int sayi2){
	int i;	
	for(i=0;i<sayi1;i++){
		printf("%d",sayi2);
	}
		
	printf("\n");
}
int farkiTopla(int a,int b)
{
	int toplam=0,i;
	if(a<b)
	{
		for(i=a+1;i<b;i++)
		{
			toplam+=i;
		}
	}
	return toplam;
}
int faktoriyel(int sayi){
	if(sayi==0 || sayi==1)
	return 1;
	else 
	return sayi*faktoriyel(sayi-1);
}
