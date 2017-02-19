#include<string.h>
#include<stdio.h>
#include<stdlib.h>
void main(){
	FILE *file;
	int counter,i,j;
	
	//------------YAZDIRMA-----------------------
	if((file=fopen("example22.txt","w"))==NULL)
	{
		printf("Dosya açılamıyor... \n ");
		exit(0);
	}

	printf("Lütfen dizi uzunluğunu giriniz:");
	scanf("%d",&counter);
	
	int dizi[counter];

	for(i=0;i<counter;i++){
		printf("Dizinin  %d. Eleamanı :",(i+1));
		scanf("%d",&dizi[i]);
	}
	printf("-----DİZİ ELEMANLARI-------\n");
	int uzunluk;
	uzunluk=sizeof(dizi) / sizeof(dizi[0]);
	printf("Dizi Uzunluğu %d \n",uzunluk);
	for(i=0;i<uzunluk;i++)
	{
		fprintf(file,"%d\n",dizi[i]);
		printf("Dizinin  %d. Eleamanı :%d \n",(i+1),dizi[i]);
	}
	fclose(file);
        //------------DOSYA OKUMA VE SIRALAMA------------------------
        char sayi[50];
	
	if((file=fopen("example22.txt","r"))==NULL)
	{
		printf("Dosya açılamıyor... \n ");
		exit(0);
	}
	printf("-----DİZİ SIRALAMA-------\n");
	int dizi2[counter],temp;
	i=0;
	while(!feof(file)){
		fscanf(file,"%s",sayi);
		dizi2[i]=atoi(sayi);
		i++;
		if(counter==i)
			break;
	}
	for(i=0;i<counter;i++)
	{
		for(j=0;j<counter;j++)
		{
			if(dizi2[i]<dizi2[j]){
				temp=dizi2[i];
				dizi2[i]=dizi2[j];
				dizi2[j]=temp;
			}
		}
	}
	fclose(file);

        //------------YAZDIRMA-----------------------
	if((file=fopen("example22.txt","w"))==NULL)
	{
		printf("Dosya açılamıyor... \n ");
		exit(0);
	}
	for(i=0;i<counter;i++)
	{
		fprintf(file,"%d\n",dizi2[i]);
		printf("Dizinin  %d. Eleamanı :%d \n",(i+1),dizi2[i]);
	}
	fclose(file);
	
}
