#include <stdio.h>
#include <string.h>

void main(int argc,char *argv[])
{
	printf("Bir sayi giriniz :");
	int sayi;
	scanf("%d",&sayi);
	int milyar=sayi/1000000000;
	sayi=sayi-milyar*1000000000;
	int yuzmilyon=sayi/100000000;
	sayi=sayi-yuzmilyon*100000000;
	int onmilyon=sayi/10000000;
	sayi=sayi-onmilyon*10000000;
	int milyon=sayi/1000000;
	sayi=sayi-milyon*1000000;
	int yuzbinler=sayi/100000;
	sayi=sayi-yuzbinler*100000;
	int onbinler=sayi/10000;
	sayi=sayi-onbinler*10000;
	int binler=sayi/1000;
	sayi=sayi-binler*1000;
	int yuzler=sayi/100;
	sayi=sayi-yuzler*100;
	int onlar=sayi/10;
	sayi=sayi-onlar*10;
	int birler=sayi/1;
	sayi=sayi-birler;
	

	switch(milyar) {
      	case 1 : printf("birmilyar!\n" );
         break;	
        case 2 :  printf("ikimilyar\n" );
         break;
       case 3 : printf("üçmilyar\n" );
         break;
       case 4 :  printf("dörtmilyar\n" );
         break;
	case 5 : printf("beşmilyar!\n" );
         break;	
        case 6 :  printf("altımilyar\n" );
         break;
       case 7 : printf("yedimilyar\n" );
         break;
       case 8 :  printf("sekizmilyar\n" );
         break;
       case 9 : printf("dokuzmilyar\n" );
         break;
       default :
        break;
        }
	
	switch(yuzmilyon) {
      	case 1 : printf("yüz\n" );
         break;	
        case 2 :  printf("ikiyüz\n" );
         break;
       case 3 : printf("üçyüz\n" );
         break;
       case 4 :  printf("dörtyüz\n" );
         break;
	case 5 : printf("beşyüz\n" );
         break;	
        case 6 :  printf("altıyüz\n" );
         break;
       case 7 : printf("yediyüz\n" );
         break;
       case 8 :  printf("sekizyüz\n" );
         break;
       case 9 : printf("dokuzyüz\n" );
         break;
       default :
        break;
        }

	switch(onmilyon) {
      	case 1 : printf("on\n" );
         break;	
        case 2 :  printf("yirmi\n" );
         break;
       case 3 : printf("otuz\n" );
         break;
       case 4 :  printf("kırk\n" );
         break;
	case 5 : printf("elli\n" );
         break;	
        case 6 :  printf("altmış\n" );
         break;
       case 7 : printf("yetmiş\n" );
         break;
       case 8 :  printf("seksen\n" );
         break;
       case 9 : printf("doksan\n" );
         break;
       default :
        break;
        }

	
	if((onmilyon !=0 || yuzmilyon !=0) && milyon==0)
	 printf("milyon\n" );

	switch(milyon) {
      	case 1 : printf("birmilyon\n" );
         break;	
        case 2 :  printf("ikimilyon\n" );
         break;
       case 3 : printf("üçmilyon\n" );
         break;
       case 4 :  printf("dörtmilyon\n" );
         break;
	case 5 : printf("beşmilyon\n" );
         break;	
        case 6 :  printf("altımilyon\n" );
         break;
       case 7 : printf("yedimilyon\n" );
         break;
       case 8 :  printf("seksenmilyon\n" );
         break;
       case 9 : printf("doksanmilyon\n" );
         break;
       default :
        break;
        }

	
	switch(yuzbinler) {
        case 1 : printf("yüz\n" );
         break;	
        case 2 : printf("ikiyüz\n" );
         break;
       case 3 : printf("üçyüz\n" );
         break;
       case 4 :  printf("dörtyüz\n" );
         break;
	case 5 : printf("beşyüz\n" );
         break;	
        case 6 :  printf("altıyüz\n" );
         break;
       case 7 : printf("yediyüz\n" );
         break;
       case 8 :  printf("sekizyüz\n" );
         break;
       case 9 : printf("dokuzyüz\n" );
         break;
       default :
        break;
        }


	switch(onbinler) {
       	case 1 : printf("on\n" );
         break;	
        case 2 :  printf("yirmi\n" );
         break;
       case 3 : printf("otuz\n" );
         break;
       case 4 :  printf("kırk\n" );
         break;
	case 5 : printf("elli\n" );
         break;	
        case 6 :  printf("altmış\n" );
         break;
       case 7 : printf("yetmiş\n" );
         break;
       case 8 :  printf("seksen\n" );
         break;
       case 9 : printf("doksan\n" );
         break;
       default :
        break;
        }
	
	if((onbinler !=0 || yuzbinler !=0) && binler==0)
	 printf("bin\n" );
	
	switch(binler) {
       	case 1 : printf("bin\n" );
         break;	
        case 2 :  printf("ikibin\n" );
         break;
       case 3 : printf("üçbin\n" );
         break;
       case 4 :  printf("dörtbin\n" );
         break;
	case 5 : printf("beşbin\n" );
         break;	
        case 6 :  printf("altıbin\n" );
         break;
       case 7 : printf("yedibin \n" );
         break;
       case 8 :  printf("sekizbin\n" );
         break;
       case 9 : printf("dokuzbin\n" );
         break;
       default :
        break;
        }
	
	switch(yuzler) {
        case 1 : printf("yüz\n" );
         break;	
        case 2 :  printf("ikiyüz\n" );
         break;
       case 3 : printf("üçyüz\n" );
         break;
       case 4 :  printf("dörtyüz\n" );
         break;
	case 5 : printf("beşyüz\n" );
         break;	
        case 6 :  printf("altıyüz\n" );
         break;
       case 7 : printf("yediyüz\n" );
         break;
       case 8 :  printf("sekizyüz\n" );
         break;
       case 9 : printf("dokuzyüz\n" );
         break;
       default :
        break;
        }
	
	
	switch(onlar) {
       	case 1 : printf("on\n" );
         break;	
        case 2 :  printf("yirmi\n" );
         break;
       case 3 : printf("otuz\n" );
         break;
       case 4 :  printf("kırk\n" );
         break;
	case 5 : printf("elli\n" );
         break;	
        case 6 :  printf("altmış\n" );
         break;
       case 7 : printf("yetmiş\n" );
         break;
       case 8 :  printf("seksen\n" );
         break;
       case 9 : printf("doksan\n" );
         break;
       default :
        break;
        }
	
	switch(birler) {
       	case 1 : 
		printf("bir\n" );
         break;	
        case 2 :
		  printf("iki\n" );
         break;
       case 3 :
		 printf("üç\n" );
         break;
       case 4 : 
		 printf("dört\n" );
         break;
	case 5 :
		 printf("beş\n" );
         break;	
        case 6 : 
		 printf("altı\n" );
         break;
       case 7 : 
		printf("yedi\n" );
         break;
       case 8 :  
		printf("sekiz\n" );
         break;
       case 9 : 
		printf("dokuz\n" );
         break;
       default :
        break;
        }
	

}
