#include<stdio.h>
#include<string.h>
int main()
{
	char a[15];
	char b[15];
	printf("1.kelimeyi giriniz :");
	scanf("%s",a);
	printf("2.kelimeyi giriniz :");
	scanf("%s",b);
	printf("1.kelime=%s  2.kelime=%s \n",a,b);
	printf("strncpy \n");
	strncpy(a,b,3);
	printf("1.kelime=%s  2.kelime=%s \n",a,b);
}
