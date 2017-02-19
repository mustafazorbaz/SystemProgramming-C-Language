#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int main(int argc,char *argv[])
{
	char dizi1[]="Bazen en ufak bi hatamızda darmadağın olur hayatımız \n";
	printf("%s",dizi1);
	//YADA
	char *dizi2="Bazende o hatalar sürükler bizi mutluluğa. \n";
	printf("%s",dizi2);
	//YADA
	char dizi3[50]="Ne kadar çok kişi benimle aynı fikirdeyse, o kadar cok yanıldığımı düşünürüm. \n";//50 yi aşınca uyarı verdi fakat 50 ye kadar yazdı.
	printf("%s",dizi3);
	printf("\n");

	/*  HATALI
	char* dizi4[100]="Tutunamadigin dalda yaprak olmaya calisma kimseye sevdiremezsin zorla kendini. \n";
	printf("%s",&dizi4);
	*/
	
	char dizi4[8]={'M','U','S','T','A','F','A','\0'}; //	'\0' (NULL) sonlandırıcı karakter dizisinin sonlandığını gösterir.
	printf("%s \n",dizi4);
	
	//5
	char *dizi5[]={"Bir","İki","Üç","Dört","Beş","Altı","Yedi","Sekiz","Dokuz"};
	printf("%s \n",dizi5[5]);

	//6 
	char dizi6[][9]={"Bir","İki","Üç","Dört","Beş","Altı","Yedi","Sekiz","Dokuz"};
	printf("%s \n",&dizi6[2]);
	//Dizi 5 te tanımlarken pointer olarak tanımladık.6 dizide tanımlarken normal tanımladık yazdırırken.Pointer olarak yazdırdık.Yani dizi tanımını pointer 	 gibi aldılayarak yazdı.
	

	//TAVSİYE EDİLMEZ ÇOK UYARI VERDİ İŞARETÇİ KOYMAMIZI İSTEDİ
	char dizi7[5][9]={"Bir","İki","Üç","Dört","Beş","Altı","Yedi","Sekiz","Dokuz"};
	printf("%s \n",&dizi7[3]);

}
