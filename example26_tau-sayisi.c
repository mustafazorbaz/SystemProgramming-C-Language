#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void main(int argc,char *argv[])
{
	int i,j,status=0,counter;
	int sinirSayi=atoi(argv[1]);
	printf("Sinir sayisi=%d \n",sinirSayi);
	int *dizi;
	counter=0;
	for(i=1;i<=sinirSayi;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%j==0){
				counter++;
			}
		}
		if(i%counter==0)
		printf("%d sayısı TAU sayısıdır. \n",i);
		counter=0;
	}
}
