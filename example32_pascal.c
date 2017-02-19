#include <string.h>
#include <stdio.h>

int faktoriyel(int);
void main(int argc,char *argv[])
{
	printf("satir sayısını giriniz :\n");
	int n,k,i,j,sayi;
	int  numara[3];
	scanf("%d",&sayi);
	int boyut=(sayi*2)+1;
	char dizi[sayi][boyut];
	int dizi2[sayi][boyut];
	int sayac=0;
	printf("Sayi %d Boyut %d \n",sayi,boyut);
	for(i=0;i<sayi;i++)
	{
		for(j=0;j<boyut;j++)
		{
			strcpy(&dizi[i][j],"+");
			//dizi2[i][j]=j;	 

		}
		//strcpy(dizi[1][boyut],"+");
	}
	strcpy(&dizi[1][1],"%");
	for(i=0;i<sayi;i++)
	{
		for(j=0;j<boyut;j++)
		{
			printf("%c",dizi[i][j]);
		}
		printf("\n");
	}
	
	for(n=0;n<=sayi;n++)
	{
		for(k=0;k<=n;k++)
		{
			int islem=0;
			islem=faktoriyel(n)/(faktoriyel(k)*(faktoriyel(n-k)));
			strcpy(&dizi[i][5],"-");
		       if(sayac<n)
			dizi[n][sayi-n]=islem;
			else if(sayac==n)
			dizi[n][sayi]=islem;
			else
			dizi[n][sayi+n]=islem;
			
			sayac++;
		}
	}
	
}
int faktoriyel(int sayi)
{
	if(sayi==0 || sayi==1)
	return 1;
	else	
	return sayi*faktoriyel(sayi-1);
}
