#include <string.h>
#include <stdlib.h>
#include <stdio.h>


void main(int argc,char *argv[])
{
	int sayac=0,sinirSayi=6000,rastgele=0;
        int zar1=0,zar2=0,zar3=0,zar4=0,zar5=0,zar6=0;
	while(sayac<sinirSayi)
	{
		rastgele=(rand() % (7 - 1)) + 1;
		if(rastgele==1)
			zar1++;
		if(rastgele==2)
			zar2++;
		if(rastgele==3)
			zar3++;
		if(rastgele==4)
			zar4++;
		if(rastgele==5)
			zar5++;
		if(rastgele==6)
			zar6++;
		sayac++;
	}
	printf("1  Gelen Sayi :%d Oran %f \n",zar1,((double)zar1/(double)sinirSayi));
	printf("2  Gelen Sayi :%d Oran %f \n",zar2,((double)zar2/(double)sinirSayi));
	printf("3  Gelen Sayi :%d Oran %f \n",zar3,((double)zar3/(double)sinirSayi));
	printf("4  Gelen Sayi :%d Oran %f \n",zar4,((double)zar4/(double)sinirSayi));
	printf("5  Gelen Sayi :%d Oran %f \n",zar5,((double)zar5/(double)sinirSayi));
	printf("6  Gelen Sayi :%d Oran %f \n",zar6,((double)zar6/(double)sinirSayi));

}
