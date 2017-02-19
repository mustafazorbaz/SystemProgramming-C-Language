#include <string.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void speedSort(int dizi[],int sol,int sag);

void main(int argc,char *argv[])
{
	time_t saat,bir,iki,fark;
	FILE *f;
	int sayilar[10000];
	int i;
	for(i=0;i<10000;i++)
		sayilar[i]=0;
		
	char satir[10];
	char *sayimiz;
	char *yol;
	int sira,sayi,sag,sol,orta,index=0;
	yol=argv[1];
	if((f=fopen(yol,"r+"))==NULL)
	printf("Dosya açılamadı...");
	else
	{
		while(!feof(f))
		{
			fscanf(f,"%s",satir);
			sayi=atoi(satir);
			sayilar[index]=sayi;
			index++;
		}
		//speedSort(sayilar,0,index-1);
	}
	iki=clock();
	fark=(iki-bir)/CLOCKS_PER_SEC;
	printf("Dosya okuma  ve sıralama süresi %.2lf ",difftime(iki,bir));
	printf("İndex = %d \n",index);

	while(1==1)
	{
		 
		printf("K'nin degerini Giriniz:\n");
		int  sira;
		scanf("%d ------",&sira);
		
		bir=clock();
		if((sira>index)||(sira==0))
			printf("HATA Dizinde Boyle Bir Sayi Yoktur\n");
		else if(sira==-1)
		{
			printf("Gule Gule :)");
			break;
		}
		else
		{
			iki=clock();
			fark=(iki-bir)/CLOCKS_PER_SEC;
		 
			printf("EN KUCUK %.2lf  SAYI %.2lf Bu Sayiyi Bulmak Icin Gecen Zaman %.2lf  sn dir \n",sira,sayilar[sira-1],fark);
		}
	}

}

void speedSort(int dizi[],int sol,int sag)
{
	register int k,j;
	int ortadaki,gecici;
	k=sol;
	j=sag;
	ortadaki=dizi[(sol+sag)/2];
	do
	{


		while(dizi[k]<ortadaki && k<sag)
			k++;
		while(ortadaki <dizi[j] && j>sol)
			j--;
		if(k<=j)
		{
			gecici=dizi[k];
			dizi[k]=dizi[j];
			dizi[j]=gecici;
			k++;
			j--;
		}
	}
	while(k<=j);
	if(k<j)
	speedSort(dizi,sol,j);
	if(k<sag)
	speedSort(dizi,k,sag);
		
}




/*
#include <stdio.h>
#include <time.h>

int main ()
{
  time_t start,end;
  time (&start);
  printf ("Bir tuşa basınız");
  char kar;
  scanf("%c",&kar);
  time (&end);
  printf ("Tuşa basmanız %.2lfsaniye sürdü.n", difftime (end,start));
  return 0;
}
*/
