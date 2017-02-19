#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void statikDizi(void);
void otomatikDizi(void);

void main(int argc,char *argv[])
{
	printf("Her Fonksiyon Ilk Çağri : \n");
	statikDizi();
	otomatikDizi();
	printf("Her Fonkksiyon Ikinci Çağrı :\n");
	statikDizi();
	otomatikDizi();
	
}
void statikDizi(void)
{
	int i;
	static int a[3];
	for(i=0;i<3;i++)
		printf("StatikDizi[%d]=%d\n",i,a[i]);
	for(int i=0;i<3;i++)
		printf("StatikDizi[%d]=%d\n",i,a[i]+=5);
}
void otomatikDizi(void)
{
	int i;
	int a[3]={1,2,3};
	for(i=0;i<3;i++)
	printf("OtomatikDizi[%d]=%d \n",i,a[i]);
	for(i=0;i<3;i++)
	printf("OtotmatikDizi[%d]=%d \n",i,a[i]+5);
}
