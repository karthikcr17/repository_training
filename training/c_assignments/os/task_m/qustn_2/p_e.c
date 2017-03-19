#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

#define MAX 100

int main()
{

	FILE *fp = NULL;

	fp = fopen("just.txt","w");
	perror("just.txt");
	
	pid_t pid;
	
	pid = fork();

	if(pid > 0) {
		fputs("Global edge ", fp);
		fclose(fp);
	}
	else if(pid == 0) {
		fputs("Software limited\n", fp);
		fclose(fp);
	}
	else 
		printf("fork is failed\n");

	return 0;
}
