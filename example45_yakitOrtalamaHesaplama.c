#include <stdio.h>
#include <string.h>
#include <math.h>

void main(int argc,char *argv[])
{
	float alinanYol,litre,ortalama;	
	printf("Lütfen aldığınız yolu giriniz :\n");
	scanf("%f",&alinanYol);
	printf("Lütfen yakılan litreyi giriniz :\n");
	scanf("%f",&litre);
	ortalama=(100*litre)/alinanYol;
	printf("SONUÇ :%f",ortalama);
}
