#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *file;
    char ad[20],soyad[20];
    int  vize,final;
    float ort;
    if((file=fopen("example7.txt","a"))==NULL)  
    {
	printf("Dosya açılamıyor... \n");
	exit(0);
    }
    
	printf("Örneği adı soyadı ve sınav  notları giriniz : \n");
	int i;
	for(i=1;i<3;i++){
		printf("%d .öğrenci :",i);
		scanf(" %s %s %d %d",ad,soyad,&vize,&final);
                ort=(vize*0.4)+(final*0.6);
                fprintf(file,"%s %s %d %d %f",ad,soyad,vize,final,ort);
	}
	fclose(file);
    if((file=fopen("example7.txt","r"))==NULL)  
    {
	printf("Dosya açılamıyor... \n");
	exit(0);
    }
    
    for(i=1;i<3;i++){
       fscanf(file,"%s %s %d %d %f",ad,soyad,&vize,&final,&ort);
       printf("%s %s %d %d %f \n",ad,soyad,vize,final,ort);
    }
}
