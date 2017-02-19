#include <stdio.h>
#include <string.h>

void main(int argc,char *argv[])
{
	char *arananKelime=argv[1];
	char *yeniKelime=argv[2];
	char *dosyaAdi=argv[3];
	
	FILE *dosya1=fopen(dosyaAdi,"r");
	FILE *dosya2=fopen("temp.txt","w");
	
	char pointer;
	int indis=0;
	int arananKelimeUzunluk=strlen(arananKelime);
	int yeniKelimeUzunluk=strlen(yeniKelime);
	int eslesenHarfSayisi=0;
	int eslesenKelimeSayisi=0;
	
	if(dosya1==NULL)
		printf("Dosya Açılamıyor");
	else{
		printf("Dosya Açıldı \n");
		pointer=getc(dosya1);
		do{
			if(arananKelimeUzunluk==1)
			{
				if(pointer==arananKelime[0])
				{
					printf("%d.indis' te %s====%s \n",indis,arananKelime,yeniKelime);
					eslesenKelimeSayisi++;
					fprintf(dosya2,"%s",yeniKelime);
				}
				else
					fprintf(dosya2,"%c",pointer);
				
				pointer=fgetc(dosya1);
				indis++;
			}
			else
			{
				int j;
				for(j=0;j<arananKelimeUzunluk;j++)
				{
					printf("%d.indis %c====%c \n",indis,pointer,arananKelime[j]);
					if(pointer==arananKelime[j])
						eslesenHarfSayisi++;
					
					pointer=getc(dosya1);
					if(pointer==EOF)
						break;
				}
				if(eslesenHarfSayisi==arananKelimeUzunluk)
				{	eslesenKelimeSayisi++;
					printf("%d.indisinde bulundu %s ile %s degisti \n",indis,arananKelime,yeniKelime);
					fprintf(dosya2,"%s",yeniKelime);
					indis=indis+arananKelimeUzunluk-1;
					fseek(dosya1,indis,SEEK_SET);
				}
				else{
					fseek(dosya1,indis,SEEK_SET);
					pointer=getc(dosya1);
					fprintf(dosya2,"%c",pointer);
				}
	
				pointer=getc(dosya1);
				eslesenHarfSayisi=0;
				indis++;
			}
		}while(pointer!=EOF);
		remove(dosyaAdi);
		rename("temp.txt",dosyaAdi);
		printf("Değişenlerin sayısı %d \n",eslesenKelimeSayisi);
		fclose(dosya2);
	}
}
