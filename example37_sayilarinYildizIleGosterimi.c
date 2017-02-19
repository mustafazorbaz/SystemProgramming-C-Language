#include <stdio.h>
#include <string.h>

void main(int argc,char *argv[])
{
	int c[10];
	for(int i=0;i<10;i++)
	{
	 do
	 {
		 printf("%d. sayiyi giriniz: ",(i+1));
		 scanf("%d",&c[i]);
	 }while(c[i]<1 || c[i]>20);
	}
	for(int i=0;i<10;i++)
	{
	 printf("%d ",c[i]);
	 for(int j=0;j< c[i];j++)
	 printf("*");
	 printf("\n");
	}
}
