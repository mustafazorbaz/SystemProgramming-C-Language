#include<stdio.h>
#include<stdlib.h>
#define BOS 0
int main()
{
  char kar;
  FILE *fp;
  if((fp=fopen("dosya2.txt","w"))==BOS){
    puts("File Not OPEN");
    exit(0);
  }
  kar='n';
  putc(kar,fp);
  fclose(fp);
  return 0;
}
