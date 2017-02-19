#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<io.h>
int main()
{
	struct
	{
		int ogrNo;
		char ad[25];
		char soyad[25];
		int araSinav;
		int yilSonuSinav;
		float ort;
       	}ogr;

	FILE *file;
	int i,j;
	int recordNo,totalRecordLength,recordCount;
	long int a,recordLength,recordKon;
	float ort;
	if((file=fopen("example8.txt","w"))==NULL)
	{ 
		printf("Dosya açılamıyor...\n");
		exit(0);
	}
	a=fileno(file);
	recordLength=sizeof(ogr);
	totalRecordLength=filelength(a);
	recordCount=totalRecordLength/recordLength;
	printf("Dosyadaki tüm kayıtların uzunlugu= %ld byte \n",filelength(a));
	printf("\n Tek bir kaydın uzunluğu %ld byte ",recordLength);
	printf("\n Kaçıncı kayıtta ulaşılacak ?");
	scanf("%d",&recordNo);
	recordKon=(recordNo-1)*(recordLength);
	fseek(file,recordKon,0);
	{
		fread(&ogr,recordKon,1,file);
		printf("\n Öğrenci no=%d \n",ogr.ogrNo);
		printf("Öğrenci adı=%s \n",ogr.ad);
		printf("Öğrenci soyadı=%s",ogr.soyad);
		printf("Ara sınav=%d \n",ogr.araSinav);
		printf("Yarıyıl sonu sınavı=%d \n",ogr.yilSonuSinav);
		printf("ortalama=%f \n",ort);

	};
	fclose(fp);
	return 0;
}
