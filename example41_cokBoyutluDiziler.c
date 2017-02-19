
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void matrisDiziYazdir(char dizi[][8],int sayi);
void matrisDiziYazdir2(int dizi[][5],int,int);
void matrisDiziYazdirIsaretcili(char *dizi[8],int sayi);
int main(int argc,char *argv[])
{


	//************ MATRİS BİÇİMİNDE DİZİ TANIMLAMA ********************
	printf("------matrisDizi1[5][8]--------\n");
	char matrisDizi1[5][8] = { "Semra", "Mustafa", "Ceyhun", "Asli", "Leyla" };
	matrisDiziYazdir(matrisDizi1,5);
	//strcpy(matrisDizi1[1],"Musti");

	printf("------matrisDizi2[][8]--------\n");
	//YADA	
	char matrisDizi2[][8]  = { "Semra", "Mustafa", "Ceyhun", "Asli", "Leyla" };
	matrisDiziYazdir(matrisDizi2,5);
	
	printf("------*matrisDizi3[5]--------\n");
	//YADA
	char *matrisDizi3[5]= { "Semra", "Mustafa", "Ceyhun", "Asli", "Leyla" };
	matrisDiziYazdirIsaretcili(matrisDizi3,5);
	
	
	//char matrisDizi1[11][7]={"Sevgi,","bir","kırgınlığın","gölgesinde","üşüyen","samimiyettir","bazen."};
	//printf("%s",matrisDizi1[0][2]);

	printf("------matrisDizi4[3][5]--------\n");
	int matrisDizi4[3][5]={{85,96,63,56,334},
			       {74,852,963,2,32},
			       {878,85,012,56,31,5}};
	
	matrisDiziYazdir2(matrisDizi4,3,5);


}
void matrisDiziYazdir(char dizi[][8],int sayi)
{
	int i,j; 
	for(i=0;i<sayi;i++)  //paremetre göndermeden strlen(dizi)  de belirtilebilir ama uyarı verir. yada paremetre olarak gelen sayıda belirtilebilir
	{
		for(j=0;j<strlen(dizi[i]);j++)
		{
			printf("%c-",dizi[i][j]);
		}
		printf("\n");
	}
}
void matrisDiziYazdir2(int dizi[][5],int satir,int sutun)
{
	int i,j; 
	for(i=0;i<satir;i++)  
	{
		for(j=0;j<sutun;j++)
		{
			printf("%d-",dizi[i][j]);
		}
		printf("\n");
	}
}
void matrisDiziYazdirIsaretcili(char *dizi[8],int sayi)
{
	int i,j; 
	for(i=0;i<sayi;i++)  //paremetre göndermeden strlen(dizi)  de belirtilebilir ama uyarı verir. yada paremetre olarak gelen sayıda belirtilebilir
	{
		for(j=0;j<strlen(dizi[i]);j++)
		{
			printf("%c-",dizi[i][j]);
		}
		printf("\n");
	}
}
