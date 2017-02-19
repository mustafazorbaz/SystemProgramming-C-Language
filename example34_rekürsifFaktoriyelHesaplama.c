#include <stdio.h>

double faktoriyel(double);
void main(int argc,char* argv[])
{
	int i,sinir;
	printf("Faktöriyel almak istediğiniz sınırı giriniz :\n");
	scanf("%d",&sinir);

	for(i=1;i<=sinir;i++)
	{
		printf("%d. sayinin faktöriyeli %f \n",i,faktoriyel(i));
	}
}
double faktoriyel(double sayi)
{
	if(sayi==1||sayi==0)
	return 1;
	else
	return sayi*faktoriyel(sayi-1);
}
