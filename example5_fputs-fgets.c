#include <stdio.h>
#include <stdlib.h>
#define BOS 0 

int main()
{
  char kar[20];
  FILE *file;
  if((file=fopen("dosya5.txt","a"))==NULL){
    puts("Dosya açılamıyor \n");
    exit(0);
  }
  printf("Please input a city name :");
  scanf("%s", kar);
  fputs(kar,file);
  fclose(file);
  return 0;
}
