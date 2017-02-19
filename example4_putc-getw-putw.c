#include<stdio.h>
#include<stdlib.h>
#define BOS 0
int main()
{
  int i,sayi;
  FILE *fp;
  if((fp=fopen("dosya4.txt","w"))==NULL)
  {
     puts("Dosya açma hatası ! ");
     exit(0);
  }
  sayi=0;
  for(i=0;i<10;i++){
     sayi=i;
     putw(sayi,fp);
    
  }
  for(i=0;i<10;i++){
     sayi=getw(fp);
     printf("sayi=%d \n",sayi);
  }
  fclose(fp);
  return 0;
}
