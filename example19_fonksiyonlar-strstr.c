#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{	 
	char a[100];
	int k;
	char b[100]="Türkiye Büyük Millet Meclisi";
	while(1)
	{
	printf("Aranmasını istediğiniz kelimeyi giriniz :");
	scanf("%s",a);
	char *p;
	p=strstr(b,a);
	printf("%s",p);
	if(p==NULL)
	{	
		printf("Aranan kelime bulunamadı \n");
	}
	printf("Tekrar denemek istiyor musun ?[1/0] \n");
	scanf("%d",&k);
	if(k==0)
	  break;			
	}
	
   return 0;
}
