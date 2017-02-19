#include<stdio.h>
#include<string.h>
int main(int argc,char *argv[])
{
	char plainWord[20],reverseWord[20];
	printf("Please enter a word to reverse \n");
	scanf("%s \n",plainWord);
	printf("Word :%s",plainWord);
	strcpy(reverseWord,plainWord);
	strrev(reverseWord);
	printf("Word is reversed =%s \n",reverseWord);
	return 0;

}
