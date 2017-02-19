#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void main(int argc,char* argv[])
{
	char metin[100];
	int orta,uzunluk,i;	
	do
	{
		time_t start,stop;
		
		printf("Lütfen bir metin giriniz tek sayı giriniz \n");
		scanf("%s",&metin);
		orta=strlen(metin)/2;
		uzunluk=strlen(metin);
		printf("Metin :%s   Uzunluk:%d Orta:%d \n",metin,uzunluk,orta);
		int sayac;
		sayac=0;
		time(&start);
		for(i=0;i<orta;i++)
		{
		     if(metin[i]==metin[uzunluk-1-i])
			sayac++;
		}
		if(sayac==orta){
		printf("%s Bir polindromdur.Zaman :%.2lf \n",metin,difftime(stop,start));
		time(&stop);
		}

	}while(strcmp(metin,"cikis")!=0);
}
