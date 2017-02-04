#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<sys/resource.h>
#include<signal.h>

int main()
{
	int sec;
	int pid;
	char line[100];
	char mesg[100];

	while(1) {
		printf("alarm ");
		if(NULL == fgets(line, sizeof(line), stdin))
			exit(0);
		if(strlen(line) <= 1)
			continue;

		if((sscanf(line,"%d %64[^\n]",&sec,mesg)) > 2) {
			printf("Bad command\n");
			continue;
		}
		else {
			pid = fork();
			if(pid > 0){
				signal(SIGCHLD,SIG_IGN); 
				continue;
			}
			else if (pid == 0) {
				sleep(sec);
				printf("(%d) %s\n",sec, mesg);
				exit(0);
			}
		}

	}
	return 0;
}





