#include<stdio.h>
#include<string.h>
int main()
{
	char *i;
	char ifade[]="Sivas Kongresi ada";
	char harf='K';
	i=strchr(ifade,harf);
	printf("%s \n",i);
}
