#include<stdio.h>
#include<string.h>
int main(int argc,char *argv)
{
	char *isim1="Mustafa";
	char *isim2="Hakan";
	char *isim3="Mustafa";

	int i1,i2,i3;
        printf("İsim1 ve İsim2 :%d \n",strcmp(isim1,isim2));
	printf("İsim2 ve İsim3 :%d \n",strcmp(isim2,isim3));
	printf("İsim1 ve İsim3 :%d \n",strcmp(isim1,isim3));
	return 0;
}
