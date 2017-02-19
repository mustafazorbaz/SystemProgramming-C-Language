#include<stdio.h>
#include<string.h>

int main()
{	
	char *katar="19 Mayıs";
	char harf='*';
	printf("strnset() fonksiyonundan önce String ifade =%s \n",katar);
	strnset(katar,harf,2);
	printf("strnset() fonksiyonundan sonra String ifade =%s \n",katar);
   return 0;
}
