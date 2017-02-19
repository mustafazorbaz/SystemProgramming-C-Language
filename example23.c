#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>

int main()
{	
	int f;
	f=fork();
	if(f==-1)
	{
		 printf("Hata \n ");
		 exit(1);
	}
	else if(f==0){
		printf("Çoçuk proccess no:%d \n",getpid());
		sleep(2);
		printf("Anne proccess no :%d \n",getppid());
	}
	else
	{
		printf("Anne proccess :%d \n",getpid());
		printf("Cocuk proccess :%d \n",f);
		printf("Anne proccess :%d \n",getppid());
		wait(NULL);
		printf("Anne sonlanıyorum... \n");
		exit(0);
	}
	return 0;
}
