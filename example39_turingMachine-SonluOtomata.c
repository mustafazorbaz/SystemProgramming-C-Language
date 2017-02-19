#include<string.h>
#include<stdio.h>
#include<stdlib.h>

void main(int argc,char *argv[])
{
	int secim;
	char durum;
	printf("Turing Machine(Sonlu Otomata) \n");
	printf("İlk Durumu Seçiniz (A,B,C yada D) \n");
	scanf("%c",&durum);
	
	do{
		printf("Durum Seçmek için 0 yada 1 'i Seçiniz (çıkış için 0) \n");
		scanf("%d",&secim);
		if(secim==0)
		{
		 	if(durum=='A')
			durum='C'; 
			else  if(durum=='B')
			durum='D';
			else if(durum=='C')
			durum='B'; 
			else if(durum=='D')
			durum='C'; 	
		}else if(secim==1)
		{
			if(durum=='A')
			durum='B'; 
		        else if(durum=='B')
			durum='B'; 
			else if(durum=='C')
			durum='A'; 
			else if(durum=='D')
			durum='A';	
		}else if(secim==2)
		break;
		
			printf("Suan ki DURUM:%c \n",durum);
	}while(secim<=2);
	
}
