#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

#define MAX 100

int main()
{

	FILE *fp = NULL;
	pid_t pid;
	
	pid = fork();

	fp = fopen("kar.txt","w");
	perror("kar.txt");
	
	if(pid > 0) {
		printf("parent %d\n", fp);
		fclose(fp);
	}
	else if(pid == 0) {
		printf("child %d\n", fp);
		fclose(fp);
	}
	else 
		printf("fork is failed\n");

	return 0;
}
