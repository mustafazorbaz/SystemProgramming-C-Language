#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *file;
  char ad[20],soyad[20];
  int numara;
  if((file=fopen("example6.txt","w"))==NULL)
  {
    printf("Dosya açılamıyor \n");
    exit(0);
  }
   printf("Öğrneci ad,soyad ve numarasını giriniz:");
   scanf("%s %s %d",ad,soyad,&numara);
   fprintf(file,"%s %s %d",ad,soyad,numara);
   fclose(file);

   if((file=fopen("example6.txt","r"))==NULL)
   {
       printf("Dosya açılamıyor \n");
       exit(0);
   }
   
   fscanf(file,"%s %s",ad,soyad);
   fscanf(file,"%d",&numara);
   printf("..........Program Çıktısı...........");
   fprintf(stdout,"öğrenci adı: %s  soyad :%s \n",ad,soyad);
   fprintf(stdout,"Öğrenci numara :%d \n ",numara);
   return 0;

}
