#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int rastgele();
void main(int argc,char *argv[])
{
	char *sayi;
	do
	{
		printf("Bir  girdi giriniz:");
		time_t star,stop;
		
		scanf("%s",sayi);
		if(strcmp(sayi,"00"));
		*strcpy(sayi,(char)rastgele());
		time(&star);
		printf("Sayi:%s  \n",sayi);
		int i,sayac=0;
		int uzunluk=strlen(sayi);
		int orta=uzunluk/2;
		for(i=0;i<orta;i++)
		{	printf("Karekter %c==%c  \n",sayi[i],sayi[uzunluk-i-1]);
			if(sayi[i]==sayi[uzunluk-i-1])		
				sayac++;
			printf("Sayaç %d \n",sayac);
		}
		if(sayac==orta)
		printf("Polindrom \n");
		else
		printf("Polindrom Değil \n");
		printf("TIME: %.2lf \n ",difftime(stop,star));
		time(&stop);
	}
	while(strcmp(sayi,"cikis"));
}
int rastgele()
{
	int sayi=0;
	rand()%20;
}
