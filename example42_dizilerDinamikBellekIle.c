#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void main(int argc,char *argv[])
{
	int diziBoyutu=0;
	int *dizi;
	printf("Lütfen Dizi Boyutunu Giriniz :");
	scanf("%d",&diziBoyutu);
	dizi=malloc(diziBoyutu*sizeof(int));
	
	int sayi=0,i;
	for(i=0;i<diziBoyutu;i++)
	{
		
		printf("%d. eleman için değer giriniz",(i+1));
		scanf("%d",&sayi);
		dizi[i]=sayi;
	}
	

	for(i=0;i<diziBoyutu;i++)
	{
		
		printf("%d. eleman %d  \n",(i+1),dizi[i]);
	 
	}
	printf("DİZİ BOYUTU :%d \n",diziBoyutu);
}
