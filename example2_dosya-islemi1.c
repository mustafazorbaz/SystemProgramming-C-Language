#include <stdio.h>
#include <stdlib.h>
void main(void)
{
  FILE *fp1;
  int id1;
  if((fp1=fopen("dosya.txt","w"))==NULL)
  {
    printf("Dosya açma hatası ! ");
    exit(1);
  }
  for(id1=0;id1<10;id1++)
  fputc('a',fp1);
   
  fclose(fp1);
  
  if((fp1=fopen("dosya.txt","r"))==NULL)
  {
     printf("Dosya açma hatası ! ");
     exit(1);
  }

  for(id1=0;id1<10;id1++)
    printf("%c",fgetc(fp1));
  printf("\n");
  fclose(fp1);
}
