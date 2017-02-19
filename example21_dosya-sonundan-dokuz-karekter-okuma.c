#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	FILE *file;
	char dizi[100];
	char fileName[40];
	if((file=fopen(argv[1],"r"))==NULL)
	{
		printf("Dosya açılamıyor...\n");
		exit(0);
	}
	fseek(file,-5,SEEK_END);
	fscanf(file,"%100c",dizi);
	printf("%s \n ",dizi);
}
