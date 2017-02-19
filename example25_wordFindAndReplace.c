#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *dosyaAdi;
void main(int argc,char *argv[])
{
	char *kelime,*yeniKelime,karekter;
	int karekterSayisi=0;
	kelime=argv[1];
	yeniKelime=argv[2];
	dosyaAdi=argv[3];
	FILE *file;
	if((file=fopen(dosyaAdi,"r"))==NULL){
		printf("Dosya açılamıyor... \n");
	}
	printf("Aranan Kelime :%s \n",kelime);
	printf("Değiştirilecek Kelime :%s \n",yeniKelime);
	printf("---------DOSYANIN İLK HALİ----------\n");
	while(!feof(file))
	{
		fscanf(file,"%c",&karekter);
		karekterSayisi++;
		printf("%c",karekter);		
	}
	printf("!---------------------------------------------\n");
	printf("Toplam Karekter Sayısı :%d \n",karekterSayisi);
	fclose(file);
	
	char *dosyaIlk=malloc(sizeof(char)*karekterSayisi);
	char *dosyaYeni=malloc(sizeof(char)*(karekterSayisi+karekterSayisi));
	if((file=fopen(dosyaAdi,"r"))==NULL)
		printf("Dosya açılamıyor... \n");
	int i;
	for(i=0;i<karekterSayisi-1;i++)
		fscanf(file,"%c",&dosyaIlk[i]);
		 
	fclose(file);
	//arananKelimeninKonumunlariniBul(dosyaIlk,kelime);
	printf("---------DOSYANIN SON HALİ----------\n");
	kelimeleriDegistir(dosyaIlk,dosyaYeni,kelime,yeniKelime);
	
}
kelimeleriDegistir(char *dosyaKayit,char *dosyaYeni,char *kelime,char *yeniKelime){
	int i,j,k,indis=0,sayac=0,kelimeSayisi=0;
	char temp;
	for(i=0;i<strlen(dosyaKayit);i++)
	{
		if(dosyaKayit[i]==kelime[sayac])
		 {
			sayac++;
			dosyaYeni[indis]=dosyaKayit[i];
			indis++;
		}
		else{
		  dosyaYeni[indis]=dosyaKayit[i];
			 //if(sayac==1)
			///	  i--;
				  
		  sayac=0;
		  indis++;
		}
		if(sayac==strlen(kelime))
		{
			for(k=0;k<strlen(kelime);k++)
			{
				dosyaYeni[indis]='-';
				indis--;
			}
			for(j=0;j<strlen(yeniKelime);j++)
			{
				 dosyaYeni[indis]=yeniKelime[j];
				  indis++;
			}
			kelimeSayisi++;
			sayac=0;
		}
	}
	for(i=0;i<strlen(dosyaYeni);i++)
	{       if(dosyaYeni[i]=='\0')
			break;
		printf("%c",dosyaYeni[i]);
		
	}
	yeniKayitiYazdir(dosyaYeni);
	if(kelimeSayisi==0)
		printf("Keliem BULUNAMADI \n");
}
/*arananKelimeninKonumunlariniBul(char *dosyaKayit,char *kelime)
{
	int i,indis=0,sayac=0,kelimeSayisi=0;
	for(i=0;i<strlen(dosyaKayit);i++)
	{
		if(dosyaKayit[i]==kelime[sayac])
			sayac++;
		else
		{
	          if(sayac==1)
		     i--;		
		  sayac=0;
		}
		if(sayac==strlen(kelime))
		{
			
			int altsinir=i-strlen(kelime)+1;
			printf("%d .Kelime %d.karekterden %d.karektere kadar \n",kelimeSayisi,altsinir,i);
			sayac=0;
		}
	}
	
	
}*/
yeniKayitiYazdir(char *metin){
	FILE *file;	
	int i;
	if((file=fopen(dosyaAdi,"w"))==NULL)
		printf("Dosya bulunamadı... \n");
	for(i=0;i<strlen(metin);i++)
	{
		if(metin[i]=='\0')
			break;
		fprintf(file,"%c",metin[i]);
	}
	fclose(file);
}

