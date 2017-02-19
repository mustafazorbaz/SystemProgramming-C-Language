#include <stdio.h>
#include <string.h>

int fibonacci(int);
int asal(int,int);
int ussu(int,int);
int faktoriyel(int);
int sayac=0;
void main(int argc,char *argv[])
{
	printf("Lütfen sınır sayıyı giriniz: \n");
	int sayi;
	scanf("%d",&sayi);
	//printf("Sayi: %d \n",fibonacci(sayi));
	//printf("Asal Mı: %d \n",asal(sayi,sayi-1));
	//printf("Ussü: %d \n",ussu(sayi,3));
	printf("Faktoriyel: %d \n",faktoriyel(sayi));
	
	//printf("Faktoriyel: %d \n",obeb(sayi,sayi2,1));
}
int fibonacci(int sayi)
{ 
	sayac++;
	printf("sayi %d  sayac:%d\n",sayi,sayac);
	if(sayi==1 || sayi==0)
	return 1;
	else
	return fibonacci(sayi-1)+fibonacci(sayi-2);
}
int asal(int sayi,int bolen)
{
	printf("sayi %d bolen %d \n",sayi,bolen);
        if(bolen<2)
            return 1;
        else if((sayi) % (bolen) ==0)
            return 0;
        else
            return asal(sayi, bolen-1);
}
int ussu(int sayi,int us)
{
	if(us==0)	
	return 0;
	else if(sayi>0 && us==1)
	return sayi;
	else 
	return sayi*ussu(sayi,us-1);
	
}
int faktoriyel(int sayi)
{
	if(sayi==0 ||  sayi==1)
	return 1;
	else
	return sayi*faktoriyel(sayi-1);
}
char obeb(int sayi1,int sayi2,int saydir){
        if(saydir>sayi1)
            return "";
        else if(sayi1%saydir==0 && sayi2%saydir==0)
            return saydir+" "+obeb(sayi1, sayi2, saydir+1);
        else
            return obeb(sayi1, sayi2, saydir+1);
 
    }





