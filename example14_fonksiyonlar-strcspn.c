#include<string.h>
#include<stdio.h>
void main(int argc,char *argv[])
{
	char a[8]="Osman";
	char b[9]="Zorbaz";
	int t;
	t=strcspn(a,b);
	printf("\n Katar içinde bulunan katar2'nin ilk karektarinin indisi %d dir.",t);
}
