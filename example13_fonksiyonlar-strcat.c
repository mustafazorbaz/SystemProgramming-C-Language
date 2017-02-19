#include<stdio.h>
#include<string.h>
int main(int argc,char *argv)
{
	static char blg[10];
	static char add[80]="Doğum yeriniz";
	printf("Doğduğunuz il neresidir ?");
	scanf("%10c",blg);
	strcat(add,blg);
	printf("add =%s \n",add);
	return 0;
}
