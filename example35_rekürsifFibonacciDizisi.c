#include <string.h>
#include <stdio.h>
double fibonacci(double);
void main(int argv,char *argc[])
{
	int islem;
	int durum=1;
	int i; 
	while(durum==1)
	{
		printf("İşlem seçiniz .... \n");
		printf("1 ) İstenilen Sayıya Kadar Fibonacci Dizininin Gösterilmesi \n");
		printf("2 ) Herhangi Bir Sayiyinin Fibonacci Dizisindeki Degeri \n");
		printf("3 ) Çikiş \n");
		scanf("%d",&islem);
		if(islem==1)
		{
			printf("Fibonacci Dizisi İçin Sinir Degeri Giriniz :");
			scanf("%d",&islem);
			printf("\n");
			for(i=0;i<islem;i++)
			printf("Fibonacci %d=%f\n",i,fibonacci(i));
			printf("\n");
		}
		else if(islem==2)
		{
			printf("Fibonnacci Degeri Hesaplamak Istenen Degeri Giriniz \n");
			scanf("%d",&islem);
			printf("\n");
			printf("Fibonnacci %d=%f\n",islem,fibonacci(islem));
		}else if(islem==3)
		{
			durum=0;
		}
		printf("\n Iyi Günler...");
	}
}
double fibonacci(double x)
{
	if(x==0 || x==1)
	 return x;
	else
	 return fibonacci(x-1)+fibonacci(x-2);
}
