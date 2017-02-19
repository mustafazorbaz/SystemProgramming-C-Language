#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(int argc,char *argv[])
{
	int toplam=0;

	int dizi[20];
	int i;
	for(i=0;i<20;i++)
	{
		dizi[i]=rand()%20;
	}
	printf("Rastgele  Sayılarımız \n");
	for(i=0;i<20;i++)
	{
		printf("%d \n",dizi[i]);
	}
	
}
