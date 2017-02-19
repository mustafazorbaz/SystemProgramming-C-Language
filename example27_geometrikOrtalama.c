#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc,char *argv[])
{
	printf("Geometrik ortalamasını almak istediğiniz sayı adetini giriniz : \n");
	int sinir,i=0,carpim=1,sayi;
	scanf("%d",&sinir);
	for(i=0;i<sinir;i++)
	{
		printf("%d. sayıyı giriniz \n",(i+1));
		scanf("%d",&sayi);
		carpim*=sayi;
	}
	float us=1.0/(float)sinir;
	float sonuc=pow(carpim,us);
	printf("SONUÇ :%f  \n",sonuc);
	return 0;
}
