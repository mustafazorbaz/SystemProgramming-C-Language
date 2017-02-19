#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void main(int argc,char *argv[])
{
	int x1,y1,x2,y2;
	x1=atoi(argv[1]);
	y1=atoi(argv[2]);
	x2=atoi(argv[3]);
	y2=atoi(argv[4]);
	if(x1==0 || x1=='\0' || y1==0 || y1=='\0' || x2=='\0' || x2==0 || y2=='\0' || y2==0 )	
	printf("Matris boyutlarını tam girmediniz ...");
	else if(y1!=x2)
	printf("y1 ve x2 eşit olmalıdır...");
	else
	{
		int i,j,c;
		int matris1[x1][y1],matris2[x2][y2],matrisCarpim[x1][y2];
		printf("--------1--------\n");
		for(i=0;i<x1;i++)
			for(j=0;j<y1;j++)
			{
		             int sayi;
			    printf("MATRIS 1  %d.satır %d.sutün =",i,j);
			    scanf("%d",&sayi);
			    matris1[i][j]=sayi;
			}
		printf("--------2--------\n");
		for(i=0;i<x2;i++)
			for(j=0;j<y2;j++)
			{
			    
		            int sayi;
			    printf("MATRIS 2  %d.satır %d.sutün =",i,j);
			    scanf("%d",&sayi);
			    matris2[i][j]=sayi;
			}
		int ortak=y1;// y1=x2
		for(i=0;i<x1;i++)
			for(j=0;j<y2;j++)
			{
				int deger=0;
				for(c=0;c<ortak;c++)
				{
				   deger +=matris1[i][c]*matris2[c][j];
				}
				matrisCarpim[i][j]=deger;
			}
		for(i=0;i<x1;i++){
			for(j=0;j<y2;j++)
			{
			    printf("%d   ",matrisCarpim[i][j]);
			}
			 printf("\n");
		}
	}
	
	
}
