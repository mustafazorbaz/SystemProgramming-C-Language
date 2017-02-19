#include<stdio.h>
#include<string.h>

void main(int argc,char *argv[])
{
	FILE *file;
	
	if((file=fopen("example20.txt","w"))==NULL)
		printf("Dosya açılamıyor... \n");
	int karekterSayisi;
	int i;
	printf("Lütfen kaç karekter girmek istediğinizi giriniz : \n");
	scanf("%d",&karekterSayisi);
	for(i=1;i<=karekterSayisi;i++){
		fprintf(file,"%c",'a');
	}
	fclose(file);

	if((file=fopen("example20.txt","r"))==NULL)
		printf("Dosya açılamıyor... \n");
	
	char deger;
	while(!feof(file))
	{
		fscanf(file,"%c",&deger);
		printf("%c",deger);
	}
	fclose(file);
	
}
