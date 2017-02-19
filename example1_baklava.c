#include <stdio.h>
void main(int argc,int *argv)
{
	int sayi,i,j,orta;
	printf("Bir sayi giriniz :\n");
	scanf("%d",&sayi);
	orta=(sayi/2)+1;
	for(i=1;i<=orta;i++)	
	{
		for(j=0;j<=orta-i;j++)
		printf("_");
		for(j=0;j<=(i*(i+1))/2-(j*2);j++)
		printf("*");
		printf("\n");
	}
	for(i=1;i<=orta;i++)	
	{
		for(j=0;j<=orta-i;j++)
		printf("_");
		for(j=0;j<i;j++)
		{
			printf("*");
			printf(" ");
		}
		printf("\n");
	}
	for(i=orta-1;i>=0;i--)	
	{
		for(j=0;j<=orta-i;j++)
		printf("_");
		for(j=0;j<i;j++)
		{
			printf("*");
			printf(" ");
		}
		printf("\n");
	}
}
