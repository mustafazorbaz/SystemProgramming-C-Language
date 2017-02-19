#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void main(int argc,char *argv[])
{
	int bir,iki,uc;
	printf("Lütfen 1. sayıyyı giriniz :");
	scanf("%d",&bir);
	printf("Lütfen 2. sayıyı giriniz :");
	scanf("%d",&iki);
	printf("Lütfen 3. sayıyı giriniz :");
	scanf("%d",&uc);
	printf("1. sayı:%d \n2. Sayı:%d \n 3. Sayı:%d \n",bir,iki,uc);
	if(bir>iki)
	{
		if(bir>uc){
			printf("Durum 1 \n");
			printf("Büyük sayı %d \n",bir);
			printf("Orta sayı %d \n",uc);
			printf("Küçük sayı %d \n",iki);
		}
		else if(iki<uc)
		{
			printf("Durum 2 \n");
			printf("Büyük sayı %d \n",bir);
			printf("Orta sayı %d \n",uc);
			printf("Küçük sayı %d \n",iki);
		}
		if(bir<uc){
			printf("Durum 3 \n");
			printf("Büyük sayı %d \n",uc);
			printf("Orta sayı %d \n",bir);
			printf("Küçük sayı %d \n",iki);
		}
	}
	if(bir<iki)
	{

		if(iki<uc)
		{	
			printf("Durum 4 \n");
			printf("Büyük sayı %d \n",uc);
			printf("Orta sayı %d \n",iki);
			printf("Küçük sayı %d \n",bir);
		}
		if(iki>uc)
		{
			printf("Durum 5 \n");
			printf("Büyük sayı %d \n",iki);
			printf("Orta sayı %d \n",uc);
			printf("Küçük sayı %d \n",bir);
		}if(bir>uc)
		{
			printf("Durum 6 \n");
			printf("Büyük sayı %d \n",iki);
			printf("Orta sayı %d \n",bir);
			printf("Küçük sayı %d \n",uc);
		}
	}
	
}
