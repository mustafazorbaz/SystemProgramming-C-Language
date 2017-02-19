#include<stdio.h>
#include<stdlib.h>
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
	if((file=fopen("example9.txt","w"))==NULL){
		printf("Dosya açılma hatası oluşmuştur...");
		exit(0);	
	}
	
	int studentCount,i;
	printf("Lütfen girmek istediğini öğrenci sayısını giriniz :");
	scanf(" %d",&studentCount);
	for(i=1;i<=studentCount;i++){
	   printf("Öğrenci Numarası :");
	   scanf("%d",&ogr.ogrNo);
	   printf("Öğrenci Adı      :");
	   scanf("%s",ogr.ad);
	   printf("Öğrenci Soyadı   :");
	   scanf("%s",ogr.soyad);
           printf("Öğrenci Ara Sınavı :");
	   scanf("%d",&ogr.araSinav);
           printf("Öğrenci Yıl Sonu Sınavı :");
	   scanf("%d",&ogr.yilSonuSinav);
	  ogr.ort=(ogr.araSinav+ogr.yilSonuSinav)/2;
	   fprintf(file," %d %s %s %d %d %f",ogr.ogrNo,ogr.ad,ogr.soyad,ogr.araSinav,ogr.yilSonuSinav,ogr.ort);
	}



	if((file=fopen("example9.txt","r"))==NULL){
		printf("Dosya açılma hatası oluşmuştur...");
		exit(0);	
	}
	for(i=1;i<=studentCount;i++)
	{
		fscanf(file,"%d %s %s %d %d %f \n",&ogr.ogrNo,ogr.ad,ogr.soyad,&ogr.araSinav,&ogr.yilSonuSinav,&ogr.ort);
	        printf("%d %s %s %d %d %f \n", ogr.ogrNo,ogr.ad,ogr.soyad, ogr.araSinav, ogr.yilSonuSinav, ogr.ort);
	}
        
}
